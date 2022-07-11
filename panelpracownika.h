#ifndef PANELPRACOWNIKA_H
#define PANELPRACOWNIKA_H

#include <QWidget>

namespace Ui {
class PanelPracownika;
}

class PanelPracownika : public QWidget
{
    Q_OBJECT

public:
    explicit PanelPracownika(QWidget *parent = nullptr);
    ~PanelPracownika();

private:
    Ui::PanelPracownika *ui;

private slots:
    void on_Zlecenie_Button_clicked();
    void on_Harmonogram_Button_clicked();

signals:
    void edytuj();
    void harmonogram();
};

#endif // PANELPRACOWNIKA_H
