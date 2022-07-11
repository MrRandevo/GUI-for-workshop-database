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

}

void ZarzadzanieKlientami::pobierzDane()
{

}

void ZarzadzanieKlientami::wyczyscDane()
{

}

void ZarzadzanieKlientami::on_Dodaj_Button_clicked()
{

}

void ZarzadzanieKlientami::on_Edytuj_Button_clicked()
{

}

void ZarzadzanieKlientami::on_Usun_Button_clicked()
{

}

void ZarzadzanieKlientami::on_Wroc_Button_clicked()
{

}
