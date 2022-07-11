#include "zarzadzaniemodelami.h"
#include "ui_zarzadzaniemodelami.h"

ZarzadzanieModelami::ZarzadzanieModelami(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieModelami)
{
    ui->setupUi(this);
}

ZarzadzanieModelami::~ZarzadzanieModelami()
{
    delete ui;
}

void ZarzadzanieModelami::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void ZarzadzanieModelami::pobierzDane()
{
    Id_Modelu = ui->Id_Line->text();
    Typ = ui->Typ_Line->text();
    Marka = ui->Marka_Line->text();
    Model = ui->Model_Line->text();
}

void ZarzadzanieModelami::wyczyscDane()
{
    ui->Id_Line->setText("");
    ui->Marka_Line->setText("");
    ui->Model_Line->setText("");
    ui->Typ_Line->setText("");
}

void ZarzadzanieModelami::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieModelami::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieModelami::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}
