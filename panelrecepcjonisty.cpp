#include "panelrecepcjonisty.h"
#include "ui_panelrecepcjonisty.h"

PanelRecepcjonisty::PanelRecepcjonisty(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelRecepcjonisty)
{
    ui->setupUi(this);
}

PanelRecepcjonisty::~PanelRecepcjonisty()
{
    delete ui;
}

void PanelRecepcjonisty::on_Klient_Button_clicked()
{
    emit klient();
}

void PanelRecepcjonisty::on_Model_Button_clicked()
{
    emit model();
}

void PanelRecepcjonisty::on_Przeglad_Button_clicked()
{
    emit przeglad();
}

void PanelRecepcjonisty::on_Samochody_Button_clicked()
{
    emit samochody();
}

void PanelRecepcjonisty::on_Stanowisko_Button_clicked()
{
    emit stanowisko();
}

void PanelRecepcjonisty::on_Usluga_Button_clicked()
{
    emit usluga();
}

void PanelRecepcjonisty::on_Wycena_Button_clicked()
{
    emit wycena();
}

void PanelRecepcjonisty::on_Zlecenie_Button_clicked()
{
    emit zlecenie();
}

void PanelRecepcjonisty::on_Harmonogram_Button_clicked()
{
    emit harmonogram();
}
