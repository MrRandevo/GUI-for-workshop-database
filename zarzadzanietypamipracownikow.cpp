#include "zarzadzanietypamipracownikow.h"
#include "ui_zarzadzanietypamipracownikow.h"

ZarzadzanieTypamiPracownikow::ZarzadzanieTypamiPracownikow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieTypamiPracownikow)
{
    ui->setupUi(this);
}

ZarzadzanieTypamiPracownikow::~ZarzadzanieTypamiPracownikow()
{
    delete ui;
}

void ZarzadzanieTypamiPracownikow::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void ZarzadzanieTypamiPracownikow::pobierzDane()
{
    Id_Typu = ui->ID_Typu_Edit->text();
    Koszt = ui->Koszt_Edit->text();
    Kompetencje = ui->Kompetencje_Edit->text();
}

void ZarzadzanieTypamiPracownikow::wyczyscDane()
{
    ui->ID_Typu_Edit->setText("");
    ui->Koszt_Edit->setText("");
    ui->Kompetencje_Edit->setText("");
}

void ZarzadzanieTypamiPracownikow::on_Dodaj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit dodaj();
}

void ZarzadzanieTypamiPracownikow::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void ZarzadzanieTypamiPracownikow::on_Usun_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit usun();
}

void ZarzadzanieTypamiPracownikow::on_Wroc_Button_clicked()
{
    emit wroc();
}
