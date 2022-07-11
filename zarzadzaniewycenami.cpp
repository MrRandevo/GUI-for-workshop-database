#include "zarzadzaniewycenami.h"
#include "ui_zarzadzaniewycenami.h"

ZarzadzanieWycenami::ZarzadzanieWycenami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieWycenami)
{
    ui->setupUi(this);
}

ZarzadzanieWycenami::~ZarzadzanieWycenami()
{
    delete ui;
}

void ZarzadzanieWycenami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
    ui->Model_Box->clear();
    ui->Usluga_Box->clear();

    QSqlQuery quer(QSqlDatabase::database("MyConnect"));
    quer.prepare("SELECT Nazwa_Marki, Nazwa_Modelu FROM model;");
    quer.exec();
    ui->Model_Box->addItem("");
    while(quer.next())
    {
        ui->Model_Box->addItem(quer.value(0).toString()+" "+quer.value(1).toString());
    }

    QSqlQuery que(QSqlDatabase::database("MyConnect"));
    que.prepare("SELECT Id_Uslugi, Nazwa FROM Typ_Uslugi;");
    que.exec();
    ui->Usluga_Box->addItem("");
    while(que.next())
    {
        ui->Usluga_Box->addItem(que.value(0).toString()+ " " + que.value(1).toString());
    }
}

void ZarzadzanieWycenami::pobierzDane()
{
    Id_Wyceny = ui->ID_Line->text();
    Cena = ui->Cena_Line->text();
    Id_Modelu = ui->Model_Box->currentText();
    Id_Uslugi = ui->Usluga_Box->currentText();
}

void ZarzadzanieWycenami::wyczyscDane()
{
    ui->ID_Line->setText("");
    ui->Cena_Line->setText("");
}

void ZarzadzanieWycenami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieWycenami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieWycenami::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}

void ZarzadzanieWycenami::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}
