#include "zarzadzaniesamochodami.h"
#include "ui_zarzadzaniesamochodami.h"

ZarzadzanieSamochodami::ZarzadzanieSamochodami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieSamochodami)
{
    ui->setupUi(this);
}

ZarzadzanieSamochodami::~ZarzadzanieSamochodami()
{
    delete ui;
}

void ZarzadzanieSamochodami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
    ui->Model_Box->clear();
    ui->Klient_Box->clear();


    QSqlQuery quer(QSqlDatabase::database("MyConnect"));
    quer.prepare("SELECT Nazwa_Marki, Nazwa_Modelu FROM model;");
    quer.exec();
    ui->Model_Box->addItem("");
    ui->Klient_Box->addItem("");
    while(quer.next())
    {
        ui->Model_Box->addItem(quer.value(0).toString()+" "+quer.value(1).toString());
    }
    QSqlQuery que(QSqlDatabase::database("MyConnect"));
    que.prepare("SELECT Id_Klienta, Imie, Nazwisko FROM klient;");
    que.exec();

    while(que.next())
    {
        ui->Klient_Box->addItem(que.value(0).toString()+ " " + que.value(1).toString()+ " " + que.value(2).toString());
    }

}

void ZarzadzanieSamochodami::pobierzDane()
{
    Id_Samochodu = ui->Samochod_Line->text();
    Typ = ui->Typ_Line->text();
    Rejestracja = ui->Rejestracja_Line->text();
    Rok = ui->Rok_Line->text();
    Id_Modelu = ui->Model_Box->currentText();
    Id_Klienta = ui->Klient_Box->currentText();
}

void ZarzadzanieSamochodami::wyczyscDane()
{
    ui->Samochod_Line->setText("");
    ui->Typ_Line->setText("");
    ui->Rejestracja_Line->setText("");
    ui->Rok_Line->setText("");

}

void ZarzadzanieSamochodami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieSamochodami::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void ZarzadzanieSamochodami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieSamochodami::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}
