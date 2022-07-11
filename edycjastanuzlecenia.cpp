#include "edycjastanuzlecenia.h"
#include "ui_edycjastanuzlecenia.h"

EdycjaStanuZlecenia::EdycjaStanuZlecenia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::EdycjaStanuZlecenia)
{
    ui->setupUi(this);
}

EdycjaStanuZlecenia::~EdycjaStanuZlecenia()
{
    delete ui;
}

void EdycjaStanuZlecenia::on_Edytuj_Button_clicked()
{
    pobierzDane();
    wyczyscDane();
    emit edytuj();
}

void EdycjaStanuZlecenia::on_Wroc_Button_clicked()
{
    emit wroc();
}

void EdycjaStanuZlecenia::ustawModel(QSqlQueryModel *model)
{
    ui->tablica->setModel(model);
    ui->tablica->resizeColumnsToContents();
}

void EdycjaStanuZlecenia::pobierzDane()
{
    ID_Zlecenia = ui->ID_Line->text();
    Stan_Zlecenia = ui->Edycja_Line->text();
}

void EdycjaStanuZlecenia::wyczyscDane()
{
    ui->ID_Line->setText("");
    ui->Edycja_Line->setText("");
}
