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
#include <zarzadzanieklientami.h>
#include <zarzadzaniesamochodami.h>
#include <zarzadzaniemodelami.h>
#include <zarzadzanieprzegladami.h>
#include <zarzadzanieuslugami.h>
#include <zarzadzaniewycenami.h>
#include <zarzadzaniedostepnoscia.h>
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
    void Wroc();
    void Raport_Ekonomiczny();
    void do_harmonogramu();

    void edytuj_stan();
    void Edycja_Stan_Zlecenia_Eksperta();
    void Wyswietl_Wyceny();
    void usun_wycene_ekspert();
    void edytuj_wycene_ekspert();
    void dodaj_wycene_ekspert();
    void Panel_Wyceny_Eksperta();

    void Wyswietl_Zlecenia();
    void Panel_Zlecen();
    void dodaj_zlecenie();
    void usun_zlecenie();

    void Panel_Pracownikow();
    void Panel_Typow_Pracownikow();
    void Wyswietl_Pracownikow();
    void dodaj_pracownika();
    void usun_pracownika();
    void edytuj_pracownika();
    void Wyswietl_Typ_Pracownikow();
    void dodaj_typ_pracownika();
    void usun_typ_pracownika();
    void edytuj_typ_pracownika();


    void Panel_Czesci();
    void Wyswietl_Czesci();
    void dodaj_czesci();
    void edytuj_czesci();
    void usun_czesci();

    void Panel_Klientow();
    void Wyswietl_Klientow();
    void dodaj_klienta();
    void usun_klienta();
    void edytuj_klienta();

    void Panel_Samochodow();
    void Wyswietl_Samochody();
    void dodaj_samochod();
    void usun_samochod();
    void edytuj_samochod();

    void Panel_Modeli();
    void Wyswietl_Modele();
    void dodaj_model();
    void usun_model();

    void Panel_Przegladow();
    void Wyswietl_Przeglady();
    void dodaj_przeglad();
    void usun_przeglad();

    void Panel_Uslug();
    void Wyswietl_Uslugi();
    void dodaj_usluge();
    void usun_usluge();

    void Panel_Wycen();
    void dodaj_wycene_recep();
    void edytuj_wycene_recep();
    void usun_wycene_recep();

    void Panel_Dostepnosci();
    void edytuj_dostepnosc();

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
    ZarzadzanieKlientami zarzKlient;
    ZarzadzanieSamochodami zarzSamoch;
    ZarzadzanieModelami zarzModel;
    ZarzadzaniePrzegladami zarzPrzeg;
    ZarzadzanieUslugami zarzUslug;
    ZarzadzanieWycenami zarzWycen;
    ZarzadzanieDostepnoscia zarzDost;
    QSqlDatabase mydb;
};
#endif // MAINWINDOW_H
