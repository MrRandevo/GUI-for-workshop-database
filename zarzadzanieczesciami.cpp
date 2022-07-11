#include "zarzadzanieczesciami.h"
#include "ui_zarzadzanieczesciami.h"

ZarzadzanieCzesciami::ZarzadzanieCzesciami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieCzesciami)
{
    ui->setupUi(this);
}

ZarzadzanieCzesciami::~ZarzadzanieCzesciami()
{
    delete ui;
}
