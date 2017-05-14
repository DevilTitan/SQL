#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_SQL.h"

class SQL : public QMainWindow, public Ui::SQLClass{
	Q_OBJECT

public:
	SQL(QWidget *parent = Q_NULLPTR);

private:
	Ui::SQLClass *ui;
};
