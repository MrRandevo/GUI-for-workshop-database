#include "panelwycen.h"
#include "ui_panelwycen.h"

PanelWycen::PanelWycen(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelWycen)
{
    ui->setupUi(this);
}

PanelWycen::~PanelWycen()
{
    delete ui;
}

void PanelWycen::on_Wroc_Button_clicked()
{

    emit wroc();
}


void PanelWycen::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void PanelWycen::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void PanelWycen::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void PanelWycen::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void PanelWycen::pobierzDane()
{
    ID_Wyceny = ui->ID_Line->text();
    Opis_Eksperta = ui->Opis_Line->text();
    Cena = ui->Cena_Line->text();
}

void PanelWycen::wyczyscDane()
{
    ui->Opis_Line->setText("");
    ui->Cena_Line->setText("");
    ui->ID_Line->setText("");
}
