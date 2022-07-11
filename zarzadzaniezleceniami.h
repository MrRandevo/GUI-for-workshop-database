#ifndef ZARZADZANIEZLECENIAMI_H
#define ZARZADZANIEZLECENIAMI_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class ZarzadzanieZleceniami;
}

class ZarzadzanieZleceniami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieZleceniami(QWidget *parent = nullptr);
    ~ZarzadzanieZleceniami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();

    QString Id_Zlecenia;
    QString Id_Klienta;
    QString Id_Samochodu;

private:
    Ui::ZarzadzanieZleceniami *ui;

private slots:
    void on_Dodaj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void dodaj();
    void usun();
    void wroc();
};

#endif // ZARZADZANIEZLECENIAMI_H
