#include "zarzadzanieklientami.h"
#include "ui_zarzadzanieklientami.h"

ZarzadzanieKlientami::ZarzadzanieKlientami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieKlientami)
{
    ui->setupUi(this);
}

ZarzadzanieKlientami::~ZarzadzanieKlientami()
{
    delete ui;
}

void ZarzadzanieKlientami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void ZarzadzanieKlientami::pobierzDane()
{
    Id_Klienta = ui->Id_Line->text();
    Imie = ui->Imie_Line->text();
    Nazwisko = ui->Nazwisko_Line->text();
    Telefon = ui->Telefon_Line->text();
}

void ZarzadzanieKlientami::wyczyscDane()
{
    ui->Id_Line->setText("");
    ui->Imie_Line->setText("");
    ui->Nazwisko_Line->setText("");
    ui->Telefon_Line->setText("");
}

void ZarzadzanieKlientami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieKlientami::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void ZarzadzanieKlientami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieKlientami::on_Wroc_Button_clicked()
{
    emit wroc();
}
