#ifndef ZARZADZANIEKLIENTAMI_H
#define ZARZADZANIEKLIENTAMI_H

#include <QWidget>
#include <QtSql>
namespace Ui {
class ZarzadzanieKlientami;
}

class ZarzadzanieKlientami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieKlientami(QWidget *parent = nullptr);
    ~ZarzadzanieKlientami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();

private:
    Ui::ZarzadzanieKlientami *ui;

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

#endif // ZARZADZANIEKLIENTAMI_H
