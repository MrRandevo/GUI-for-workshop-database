#include "paneleksperta.h"
#include "ui_paneleksperta.h"

PanelEksperta::PanelEksperta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelEksperta)
{
    ui->setupUi(this);
}

PanelEksperta::~PanelEksperta()
{
    delete ui;
}



void PanelEksperta::on_Zlecenie_Button_clicked()
{
    emit edytuj();
}

void PanelEksperta::on_Harmonogram_Button_clicked()
{
    emit harmonogram();
}

void PanelEksperta::on_Wycena_Button_clicked()
{
    emit wycena();
}
