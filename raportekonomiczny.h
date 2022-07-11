#ifndef RAPORTEKONOMICZNY_H
#define RAPORTEKONOMICZNY_H

#include <QWidget>

namespace Ui {
class RaportEkonomiczny;
}

class RaportEkonomiczny : public QWidget
{
    Q_OBJECT

public:
    explicit RaportEkonomiczny(QWidget *parent = nullptr);
    ~RaportEkonomiczny();

private:
    Ui::RaportEkonomiczny *ui;
};

#endif // RAPORTEKONOMICZNY_H
