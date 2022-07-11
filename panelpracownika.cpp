#include "panelpracownika.h"
#include "ui_panelpracownika.h"

PanelPracownika::PanelPracownika(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelPracownika)
{
    ui->setupUi(this);
}

PanelPracownika::~PanelPracownika()
{
    delete ui;
}

void PanelPracownika::on_Zlecenie_Button_clicked()
{
    emit edytuj();
}

void PanelPracownika::on_Harmonogram_Button_clicked()
{
    emit harmonogram();
}
