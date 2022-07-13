#include "zarzadzanieczesciami.h"
#include "ui_zarzadzanieczesciami.h"

ZarzadzanieCzesciami::ZarzadzanieCzesciami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieCzesciami)
{
    ui->setupUi(this);
}

ZarzadzanieCzesciami::~ZarzadzanieCzesciami()
{
    delete ui;
}

void ZarzadzanieCzesciami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
    ui->Model_Box->clear();
    ui->Typ_Box->clear();
    ui->Model_Box->addItem("");
    ui->Typ_Box->addItem("");
    QSqlQuery quer(QSqlDatabase::database("MyConnect"));
    quer.prepare("SELECT Nazwa_Marki, Nazwa_Modelu FROM model;");
    quer.exec();

    while(quer.next())
    {
        ui->Model_Box->addItem(quer.value(0).toString()+" "+quer.value(1).toString());
    }

    QSqlQuery que(QSqlDatabase::database("MyConnect"));
    que.prepare("SELECT Id_Typu_Czesci,Nazwa FROM Typ_Czesci;");
    que.exec();

    while(que.next())
    {
        ui->Typ_Box->addItem(que.value(0).toString()+ " " + que.value(1).toString()+"");
    }


}

void ZarzadzanieCzesciami::pobierzDane()
{
    Id_Czesci = ui->Id_Line->text();
    Ilosc = ui->Ilosc_Line->text();
    Id_Modelu = ui->Model_Box->currentText();
    Id_Typu_Czesci = ui->Typ_Box->currentText();
}

void ZarzadzanieCzesciami::wyczyscDane()
{
    ui->Id_Line->setText("");
    ui->Ilosc_Line->setText("");
}

void ZarzadzanieCzesciami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieCzesciami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieCzesciami::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void ZarzadzanieCzesciami::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}
