#ifndef ZARZADZANIEMODELAMI_H
#define ZARZADZANIEMODELAMI_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class ZarzadzanieModelami;
}

class ZarzadzanieModelami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieModelami(QWidget *parent = nullptr);
    ~ZarzadzanieModelami();

    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();
    QString Id_Modelu;
    QString Marka;
    QString Model;
    QString Typ;

private:
    Ui::ZarzadzanieModelami *ui;

private slots:
    void on_Dodaj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void dodaj();
    void usun();
    void wroc();
};

#endif // ZARZADZANIEMODELAMI_H
