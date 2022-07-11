#include "panelszefa.h"
#include "ui_panelszefa.h"

PanelSzefa::PanelSzefa(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelSzefa)
{
    ui->setupUi(this);
}

PanelSzefa::~PanelSzefa()
{
    delete ui;
}

void PanelSzefa::on_Pracownicy_Button_clicked()
{
    emit panel_pracownikow();
}

void PanelSzefa::on_Raport_Button_clicked()
{
    emit stworz_raport();
}

void PanelSzefa::on_Typy_Button_clicked()
{
    emit panel_typow_pracownikow();
}
