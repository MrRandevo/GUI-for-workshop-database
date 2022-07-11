#include "logowanie.h"
#include "ui_logowanie.h"
#include <QString>

Logowanie::Logowanie(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Logowanie)
{
    ui->setupUi(this);

}



void Logowanie::on_Zaloguj_Button_clicked()
{

    PESEL = ui->Pole_PESEL->text();
    Haslo = ui->Pole_Haslo->text();
    emit loguj();
}

void Logowanie::wyswietlTekst(QString tekst)
{
    ui->Login_Info->setText(tekst);

}
void Logowanie::wyczyscDane()
{
    ui->Pole_PESEL->setText("");
    ui->Pole_Haslo->setText("");

}
