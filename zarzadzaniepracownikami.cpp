#include "zarzadzaniepracownikami.h"
#include "ui_zarzadzaniepracownikami.h"

zarzadzaniepracownikami::zarzadzaniepracownikami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::zarzadzaniepracownikami)
{
    ui->setupUi(this);
}

zarzadzaniepracownikami::~zarzadzaniepracownikami()
{
    delete ui;
}

void zarzadzaniepracownikami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void zarzadzaniepracownikami::pobierzDane()
{
    Typ_Pracownika = ui->TypPracownikaBox->currentText();
    Posada = ui->PosadaBox->currentText();
    Id_Pracownika = ui->IdPracownika_Line->text();
    Haslo = ui->Haslo_Line->text();
    Imie = ui->Imie_Line->text();
    Nazwisko = ui->Nazwisko_Line->text();
    PESEL = ui->PESEL_Line->text();
}

void zarzadzaniepracownikami::wyczyscDane()
{
    ui->PosadaBox->setCurrentIndex(1);
    ui->TypPracownikaBox->setCurrentIndex(0);
    ui->IdPracownika_Line->setText("");
    ui->Imie_Line->setText("");
    ui->Nazwisko_Line->setText("");
    ui->PESEL_Line->setText("");
    ui->Haslo_Line->setText("");
}

void zarzadzaniepracownikami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void zarzadzaniepracownikami::on_Edytuj_Button_clicked()
{

    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void zarzadzaniepracownikami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void zarzadzaniepracownikami::on_Wroc_Button_clicked()
{
    emit wroc();
}
