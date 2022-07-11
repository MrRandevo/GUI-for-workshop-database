#ifndef ZARZADZANIESAMOCHODAMI_H
#define ZARZADZANIESAMOCHODAMI_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class ZarzadzanieSamochodami;
}

class ZarzadzanieSamochodami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieSamochodami(QWidget *parent = nullptr);
    ~ZarzadzanieSamochodami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();
    QString Id_Samochodu;
    QString Typ;
    QString Rejestracja;
    QString Rok;
    QString Id_Modelu;
    QString Id_Klienta;

private:
    Ui::ZarzadzanieSamochodami *ui;
private slots:
    void on_Dodaj_Button_clicked();
    void on_Edytuj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void dodaj();
    void usun();
    void edytuj();
    void wroc();
};


#endif // ZARZADZANIESAMOCHODAMI_H
