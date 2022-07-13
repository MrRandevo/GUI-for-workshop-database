#ifndef PANELMAGAZYNIERA_H
#define PANELMAGAZYNIERA_H

#include <QWidget>

namespace Ui {
class PanelMagazyniera;
}

class PanelMagazyniera : public QWidget
{
    Q_OBJECT

public:
    explicit PanelMagazyniera(QWidget *parent = nullptr);
    ~PanelMagazyniera();

private:
    Ui::PanelMagazyniera *ui;

private slots:
    void on_Czesci_Button_clicked();
    void on_Harmonogram_Button_clicked();
    void on_Dostepnosc_Button_clicked();
signals:
    void czesci();
    void harmonogram();
    void dostepnosc();
};

#endif // PANELMAGAZYNIERA_H
