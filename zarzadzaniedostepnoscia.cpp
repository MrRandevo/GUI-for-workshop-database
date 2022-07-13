#include "zarzadzaniedostepnoscia.h"
#include "ui_zarzadzaniedostepnoscia.h"

ZarzadzanieDostepnoscia::ZarzadzanieDostepnoscia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ZarzadzanieDostepnoscia)
{
    ui->setupUi(this);
}

ZarzadzanieDostepnoscia::~ZarzadzanieDostepnoscia()
{
    delete ui;
}

void ZarzadzanieDostepnoscia::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void ZarzadzanieDostepnoscia::pobierzDane()
{
    Id_Zlecenia = ui->ID_Line->text();
    Dostepnosc = ui->Dostepnosc_Line->text();
}

void ZarzadzanieDostepnoscia::wyczyscDane()
{
    ui->Dostepnosc_Line->setText("");
    ui->ID_Line->setText("");
}

void ZarzadzanieDostepnoscia::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void ZarzadzanieDostepnoscia::on_Wroc_Button_clicked()
{
    wyczyscDane();
    emit wroc();
}
