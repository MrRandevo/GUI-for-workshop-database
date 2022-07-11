#include "zarzadzanieuslugami.h"
#include "ui_zarzadzanieuslugami.h"

ZarzadzanieUslugami::ZarzadzanieUslugami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieUslugami)
{
    ui->setupUi(this);
}

ZarzadzanieUslugami::~ZarzadzanieUslugami()
{
    delete ui;
}

void ZarzadzanieUslugami::ustawModel(QSqlQueryModel *model)
{
   ui->tablica->setModel(model);
   ui->tablica->resizeColumnsToContents();
}

void ZarzadzanieUslugami::pobierzDane()
{
    Id_Uslugi = ui->Id_Line->text();
    Nazwa = ui->Nazwa_Line->text();
}

void ZarzadzanieUslugami::wyczyscDane()
{
    ui->Id_Line->setText("");
    ui->Nazwa_Line->setText("");
}

void ZarzadzanieUslugami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieUslugami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieUslugami::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}
