#include "panelmagazyniera.h"
#include "ui_panelmagazyniera.h"

PanelMagazyniera::PanelMagazyniera(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelMagazyniera)
{
    ui->setupUi(this);
}

PanelMagazyniera::~PanelMagazyniera()
{
    delete ui;
}

void PanelMagazyniera::on_Czesci_Button_clicked()
{
    emit czesci();
}

void PanelMagazyniera::on_Harmonogram_Button_clicked()
{
    emit harmonogram();
}
