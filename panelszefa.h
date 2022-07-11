#ifndef PANELSZEFA_H
#define PANELSZEFA_H

#include <QWidget>

namespace Ui {
class PanelSzefa;
}

class PanelSzefa : public QWidget
{
    Q_OBJECT

public:
    explicit PanelSzefa(QWidget *parent = nullptr);
    ~PanelSzefa();

private:
    Ui::PanelSzefa *ui;

private slots:
    void on_Pracownicy_Button_clicked();
    void on_Raport_Button_clicked();
    void on_Typy_Button_clicked();
signals:
    void stworz_raport();
    void panel_pracownikow();
    void panel_typow_pracownikow();
};

#endif // PANELSZEFA_H
