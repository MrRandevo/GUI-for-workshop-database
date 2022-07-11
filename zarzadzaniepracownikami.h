#ifndef ZARZADZANIEPRACOWNIKAMI_H
#define ZARZADZANIEPRACOWNIKAMI_H
#include <QtSql>
#include <QWidget>

namespace Ui {
class zarzadzaniepracownikami;
}

class zarzadzaniepracownikami : public QWidget
{
    Q_OBJECT

public:
    explicit zarzadzaniepracownikami(QWidget *parent = nullptr);
    ~zarzadzaniepracownikami();
    void ustawModel(QSqlQueryModel* model);

    void pobierzDane();
    void wyczyscDane();

    QString Id_Pracownika;
    QString PESEL;
    QString Imie;
    QString Nazwisko;
    QString Haslo;
    QString Typ_Pracownika;
    QString Posada;

private:
    Ui::zarzadzaniepracownikami *ui;

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

#endif // ZARZADZANIEPRACOWNIKAMI_H
