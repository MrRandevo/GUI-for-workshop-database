#ifndef HARMONOGRAM_H
#define HARMONOGRAM_H

#include <QWidget>

namespace Ui {
class Harmonogram;
}

class Harmonogram : public QWidget
{
    Q_OBJECT

public:
    explicit Harmonogram(QWidget *parent = nullptr);
    ~Harmonogram();

private:
    Ui::Harmonogram *ui;

private slots:
    void on_Wroc_Button_clicked();

signals:
    void wroc();
};

#endif // HARMONOGRAM_H
