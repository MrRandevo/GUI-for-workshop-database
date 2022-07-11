#ifndef EDYCJASTANUZLECENIA_H
#define EDYCJASTANUZLECENIA_H

#include <QWidget>
#include <QtSql>

namespace Ui {
class EdycjaStanuZlecenia;
}

class EdycjaStanuZlecenia : public QWidget
{
    Q_OBJECT

public:
    explicit EdycjaStanuZlecenia(QWidget *parent = nullptr);
    ~EdycjaStanuZlecenia();
    void ustawModel(QSqlQueryModel *model);

    void pobierzDane();
    void wyczyscDane();
    QString ID_Zlecenia;
    QString Stan_Zlecenia;

private slots:
    void on_Edytuj_Button_clicked();
    void on_Wroc_Button_clicked();


signals:
    void edytuj();
    void wroc();

private:
    Ui::EdycjaStanuZlecenia *ui;
};

#endif // EDYCJASTANUZLECENIA_H
