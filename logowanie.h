#ifndef LOGOWANIE_H
#define LOGOWANIE_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class Logowanie;
}

class Logowanie : public QWidget
{
    Q_OBJECT
public:
    explicit Logowanie(QWidget *parent = nullptr);


    void wyswietlTekst(QString tekst);
    void wyczyscDane();
    QString PESEL;
    QString Haslo;
private slots:
    void on_Zaloguj_Button_clicked();

signals:
    void loguj();

private:
    Ui::Logowanie *ui;
};

#endif // LOGOWANIE_H
