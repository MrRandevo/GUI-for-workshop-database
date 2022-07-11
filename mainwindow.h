#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtSql>
#include <QSqlDatabase>
#include "logowanie.h"
#include "panelpracownika.h"
#include "panelszefa.h"
#include "panelrecepcjonisty.h"
#include "panelmagazyniera.h"
#include "paneleksperta.h"
#include "edycjastanuzlecenia.h"
#include "panelwycen.h"
#include <QtDebug>
#include <QFileInfo>
#include <zarzadzaniepracownikami.h>
#include <zarzadzanietypamipracownikow.h>
#include <zarzadzaniezleceniami.h>
#include <raportekonomiczny.h>
#include <harmonogram.h>
#include <zarzadzanieczesciami.h>
#include <QObject>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    //QSqlDatabase bazaDanych();
    int currentWidget;
private slots:
    void zaloguj();
    void edytuj_stan();
    void panel_wyceny();
    void Edycja_Stan_Zlecenia_Eksperta();
    void Wroc();
    void Wyswietl_Zlecenia();
    void Wyswietl_Wyceny();
    void Panel_Pracownikow();
    void Panel_Typow_Pracownikow();
    void Raport_Ekonomiczny();
    void Wyswietl_Pracownikow();
    void usun_wycene();
    void edytuj_wycene();
    void dodaj_pracownika();
    void usun_pracownika();
    void edytuj_pracownika();
    void Wyswietl_Typ_Pracownikow();
    void dodaj_typ_pracownika();
    void usun_typ_pracownika();
    void edytuj_typ_pracownika();
    void Panel_Zlecen();
    void dodaj_zlecenie();
    void usun_zlecenie();
    void do_harmonogramu();
    void Panel_Czesci();

private:
    Ui::MainWindow *ui;
    Logowanie login;
    PanelPracownika panPrac;
    PanelSzefa panSzef;
    PanelRecepcjonisty panRec;
    PanelMagazyniera panMag;
    PanelEksperta panEksp;
    PanelWycen panWcn;
    EdycjaStanuZlecenia edtStanZl;
    zarzadzaniepracownikami zarzPrac;
    ZarzadzanieTypamiPracownikow zarzTypPrac;
    RaportEkonomiczny rapEkon;
    ZarzadzanieZleceniami zarzZlc;
    Harmonogram harm;
    ZarzadzanieCzesciami zarzCzesc;
    QSqlDatabase mydb;
};
#endif // MAINWINDOW_H
