#include "zarzadzaniezleceniami.h"
#include "ui_zarzadzaniezleceniami.h"

ZarzadzanieZleceniami::ZarzadzanieZleceniami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieZleceniami)
{
    ui->setupUi(this);
}

ZarzadzanieZleceniami::~ZarzadzanieZleceniami()
{
    delete ui;
}

void ZarzadzanieZleceniami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void ZarzadzanieZleceniami::pobierzDane()
{
    Id_Zlecenia=ui->Id_Edit->text();
}

void ZarzadzanieZleceniami::wyczyscDane()
{
    ui->Id_Edit->setText("");
}

void ZarzadzanieZleceniami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieZleceniami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieZleceniami::on_Wroc_Button_clicked()
{
    emit wroc();
}
