#ifndef ZARZADZANIEWYCENAMI_H
#define ZARZADZANIEWYCENAMI_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class ZarzadzanieWycenami;
}

class ZarzadzanieWycenami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieWycenami(QWidget *parent = nullptr);
    ~ZarzadzanieWycenami();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();

    QString Id_Wyceny;
    QString Id_Modelu;
    QString Cena;
    QString Id_Uslugi;
private:
    Ui::ZarzadzanieWycenami *ui;

private slots:
    void on_Dodaj_Button_clicked();
    void on_Usun_Button_clicked();
    void on_Wroc_Button_clicked();
    void on_Edytuj_Button_clicked();

signals:
    void dodaj();
    void usun();
    void wroc();
    void edytuj();
};

#endif // ZARZADZANIEWYCENAMI_H
