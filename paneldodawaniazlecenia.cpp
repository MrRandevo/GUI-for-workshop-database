#include "paneldodawaniazlecenia.h"
#include "ui_paneldodawaniazlecenia.h"

PanelDodawaniaZlecenia::PanelDodawaniaZlecenia(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::PanelDodawaniaZlecenia)
{
    ui->setupUi(this);
}

PanelDodawaniaZlecenia::~PanelDodawaniaZlecenia()
{
    delete ui;
}
