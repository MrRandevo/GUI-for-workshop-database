#include "zarzadzanieprzegladami.h"
#include "ui_zarzadzanieprzegladami.h"

ZarzadzaniePrzegladami::ZarzadzaniePrzegladami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzaniePrzegladami)
{
    ui->setupUi(this);
}

ZarzadzaniePrzegladami::~ZarzadzaniePrzegladami()
{
    delete ui;
}

void ZarzadzaniePrzegladami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
    ui->Samochod_Box->clear();

    QSqlQuery quer(QSqlDatabase::database("MyConnect"));
    quer.prepare("SELECT Id_Samochodu,Rejestracja FROM samochod;");
    quer.exec();
    ui->Samochod_Box->addItem("");
    while(quer.next())
    {
        ui->Samochod_Box->addItem(quer.value(0).toString()+" "+quer.value(1).toString());
    }

}

void ZarzadzaniePrzegladami::pobierzDane()
{
    Id_Samochodu = ui->Samochod_Box->currentText();
    Id_Przegladu = ui->Przeglad_Line->text();
    Do_daty = ui->Do_Edit->date();
    Od_Daty = ui->Data_Edit->date();
}

void ZarzadzaniePrzegladami::wyczyscDane()
{
    ui->Przeglad_Line->setText("");
}

void ZarzadzaniePrzegladami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzaniePrzegladami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzaniePrzegladami::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}
