#ifndef ZARZADZANIETYPAMIPRACOWNIKOW_H
#define ZARZADZANIETYPAMIPRACOWNIKOW_H

#include <QWidget>
#include <QtSql>
namespace Ui {
class ZarzadzanieTypamiPracownikow;
}

class ZarzadzanieTypamiPracownikow : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieTypamiPracownikow(QWidget *parent = nullptr);
    ~ZarzadzanieTypamiPracownikow();

    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();
    QString Id_Typu;
    QString Koszt;
    QString Kompetencje;

private:
    Ui::ZarzadzanieTypamiPracownikow *ui;

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

#endif // ZARZADZANIETYPAMIPRACOWNIKOW_H
