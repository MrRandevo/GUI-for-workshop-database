#ifndef PANELEKSPERTA_H
#define PANELEKSPERTA_H

#include <QWidget>

namespace Ui {
class PanelEksperta;
}

class PanelEksperta : public QWidget
{
    Q_OBJECT

public:
    explicit PanelEksperta(QWidget *parent = nullptr);
    ~PanelEksperta();

private:
    Ui::PanelEksperta *ui;

private slots:
    void on_Zlecenie_Button_clicked();
    void on_Harmonogram_Button_clicked();
    void on_Wycena_Button_clicked();
signals:
    void edytuj();
    void wycena();
    void harmonogram();
};

#endif // PANELEKSPERTA_H
