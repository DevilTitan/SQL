#include "SQL.h"

#include <QtSql>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QDebug>

SQL::SQL(QWidget *parent): QMainWindow(parent){
	ui->setupUi(this);

	QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
	db.setHostName("127.0.0.1");
	db.setUserName("khoanguyen0807");
	db.setPassword("Adele251998");
	db.setDatabaseName("music");

	if (db.open()) {
		QSqlQuery query;
		if (query.exec("SELECT artist_name FROM artist")) {
			while (query.next()) {
				qDebug() << query.value(0);
				ui->test->addItem(query.value(0).toString());
			}
		}
		else {
			qDebug() << query.lastError().text();
		}
		db.close();
	}
	else {
		qDebug() << "Failed to connect to database.";
	}
}
