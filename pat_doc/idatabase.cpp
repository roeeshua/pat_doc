#include "idatabase.h"

void IDatabase::ininDatabase()
{
    database=QSqlDatabase::addDatabase("QSQLITE");//添加 SQL LITE数据库驱动
    QString aFile="F:/医患数据库/pat_doc.db";
    database.setDatabaseName(aFile); //设置数据库名称

    if(!database.open()){//打开数据库
        qDebug()<< "failed to open database";
    }else
        qDebug()<< "open database is ok"<< database.connectionName();
}

QString IDatabase::userLogin(QString userName, QString password)
{
    QSqlQuery query;
    query.prepare("select username,password from user where username =:USER");
    query.bindValue(":USER",userName);
    query.exec();

    qDebug()<< query.lastQuery()<<query.first();

    if(query.first()&& query.value("username").isValid()){
        QString passwd =query.value("password").toString();
        if(passwd==password){
            qDebug()<<"loginOk";
            return "loginOk";
        }else{
            qDebug()<<"wrongPassword";
            return "wrongPassword";
        }
    }else{
        qDebug()<<"no such user";
        return "wrongUsername";
    }
    return "loginFailed";
}

IDatabase::IDatabase(QObject *parent)
    : QObject{parent}
{
    ininDatabase();
}
