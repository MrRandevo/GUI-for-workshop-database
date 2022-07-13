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
    ui->Model_Box->clear();

    QSqlQuery quer(QSqlDatabase::database("MyConnect"));
    quer.prepare("SELECT Nazwa_Marki, Nazwa_Modelu FROM model;");
    quer.exec();
    ui->Model_Box->addItem("");
    while(quer.next())
    {
        ui->Model_Box->addItem(quer.value(0).toString()+" "+quer.value(1).toString());
    }
}

void PanelWycen::pobierzDane()
{
    ID_Wyceny = ui->ID_Line->text();
    Opis_Eksperta = ui->Opis_Line->text();
    Cena = ui->Cena_Line->text();
    ID_Modelu = ui->Model_Box->currentText();
}

void PanelWycen::wyczyscDane()
{
    ui->Opis_Line->setText("");
    ui->Cena_Line->setText("");
    ui->ID_Line->setText("");
}
