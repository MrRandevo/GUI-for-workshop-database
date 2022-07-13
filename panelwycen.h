#ifndef PANELWYCEN_H
#define PANELWYCEN_H

#include <QWidget>
#include <QtSql>
namespace Ui {
class PanelWycen;
}

class PanelWycen : public QWidget
{
    Q_OBJECT

public:
    explicit PanelWycen(QWidget *parent = nullptr);
    ~PanelWycen();
    void ustawModel(QSqlQueryModel *model);

    void pobierzDane();
    void wyczyscDane();
    QString ID_Wyceny;
    QString Opis_Eksperta;
    QString Cena;
    QString ID_Modelu;

private:
    Ui::PanelWycen *ui;

private slots:
    void on_Wroc_Button_clicked();
    void on_Edytuj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Dodaj_Button_clicked();
signals:
    void edytuj();
    void dodaj();
    void wroc();
    void usun();

};

#endif // PANELWYCEN_H
