#ifndef PANELRECEPCJONISTY_H
#define PANELRECEPCJONISTY_H

#include <QWidget>

namespace Ui {
class PanelRecepcjonisty;
}

class PanelRecepcjonisty : public QWidget
{
    Q_OBJECT

public:
    explicit PanelRecepcjonisty(QWidget *parent = nullptr);
    ~PanelRecepcjonisty();

private:
    Ui::PanelRecepcjonisty *ui;

private slots:
    void on_Klient_Button_clicked();
    void on_Model_Button_clicked();
    void on_Przeglad_Button_clicked();
    void on_Samochody_Button_clicked();
    void on_Stanowisko_Button_clicked();
    void on_Usluga_Button_clicked();
    void on_Wycena_Button_clicked();
    void on_Zlecenie_Button_clicked();
    void on_Harmonogram_Button_clicked();
signals:
    void klient();
    void model();
    void przeglad();
    void samochody();
    void stanowisko();
    void usluga();
    void wycena();
    void zlecenie();
    void harmonogram();
};

#endif // PANELRECEPCJONISTY_H
