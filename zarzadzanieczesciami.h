#ifndef ZARZADZANIECZESCIAMI_H
#define ZARZADZANIECZESCIAMI_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class ZarzadzanieCzesciami;
}

class ZarzadzanieCzesciami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieCzesciami(QWidget *parent = nullptr);
    ~ZarzadzanieCzesciami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();
    QString Id_Czesci;
    QString Id_Modelu;
    QString Id_Typu_Czesci;
    QString Ilosc;
private:
    Ui::ZarzadzanieCzesciami *ui;

private slots:
    void on_Dodaj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Edytuj_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void dodaj();
    void usun();
    void wroc();
    void edytuj();
};

#endif // ZARZADZANIECZESCIAMI_H
