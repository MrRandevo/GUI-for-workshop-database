#include "raportekonomiczny.h"
#include "ui_raportekonomiczny.h"

RaportEkonomiczny::RaportEkonomiczny(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RaportEkonomiczny)
{
    ui->setupUi(this);
}

RaportEkonomiczny::~RaportEkonomiczny()
{
    delete ui;
}
