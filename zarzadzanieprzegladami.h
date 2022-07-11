#ifndef ZARZADZANIEPRZEGLADAMI_H
#define ZARZADZANIEPRZEGLADAMI_H

#include <QWidget>
#include <QtSql>
#include <QDate>

namespace Ui {
class ZarzadzaniePrzegladami;
}

class ZarzadzaniePrzegladami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzaniePrzegladami(QWidget *parent = nullptr);
    ~ZarzadzaniePrzegladami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();
    QString Id_Przegladu;
    QString Id_Samochodu;
    QDate Od_Daty;
    QDate Do_daty;

private slots:
    void on_Dodaj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void dodaj();
    void usun();
    void wroc();

private:
    Ui::ZarzadzaniePrzegladami *ui;
};

#endif // ZARZADZANIEPRZEGLADAMI_H
