#ifndef ZARZADZANIEDOSTEPNOSCIA_H
#define ZARZADZANIEDOSTEPNOSCIA_H

#include <QWidget>
#include <QtSql>
namespace Ui {
class ZarzadzanieDostepnoscia;
}

class ZarzadzanieDostepnoscia : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieDostepnoscia(QWidget *parent = nullptr);
    ~ZarzadzanieDostepnoscia();
    void ustawModel(QSqlQueryModel* model);
    void pobierzDane();
    void wyczyscDane();
    QString Id_Zlecenia;
    QString Dostepnosc;
private:
    Ui::ZarzadzanieDostepnoscia *ui;
private slots:
    void on_Edytuj_Button_clicked();
    void on_Wroc_Button_clicked();

signals:
    void edytuj();
    void wroc();
};



#endif // ZARZADZANIEDOSTEPNOSCIA_H
