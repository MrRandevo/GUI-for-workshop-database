#include "harmonogram.h"
#include "ui_harmonogram.h"

Harmonogram::Harmonogram(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Harmonogram)
{
    ui->setupUi(this);
}

Harmonogram::~Harmonogram()
{
    delete ui;
}

void Harmonogram::on_Wroc_Button_clicked()
{
    emit wroc();
}
