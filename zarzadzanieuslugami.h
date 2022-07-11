#ifndef ZARZADZANIEUSLUGAMI_H
#define ZARZADZANIEUSLUGAMI_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class ZarzadzanieUslugami;
}

class ZarzadzanieUslugami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieUslugami(QWidget *parent = nullptr);
    ~ZarzadzanieUslugami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();

    QString Id_Uslugi;
    QString Nazwa;

private:
    Ui::ZarzadzanieUslugami *ui;

private slots:
    void on_Dodaj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void dodaj();
    void usun();
    void wroc();

};

#endif // ZARZADZANIEUSLUGAMI_H
