#pragma once

#include <QtWidgets/QWidget>
#include "ui_testbasemodule.h"

class testBaseModule : public QWidget
{
    Q_OBJECT

public:
    testBaseModule(QWidget *parent = Q_NULLPTR);

private:
    Ui::testBaseModuleClass ui;
};
