#ifndef ZARZADZANIECZESCIAMI_H
#define ZARZADZANIECZESCIAMI_H

#include <QWidget>

namespace Ui {
class ZarzadzanieCzesciami;
}

class ZarzadzanieCzesciami : public QWidget
{
    Q_OBJECT

public:
    explicit ZarzadzanieCzesciami(QWidget *parent = nullptr);
    ~ZarzadzanieCzesciami();

private:
    Ui::ZarzadzanieCzesciami *ui;
};

#endif // ZARZADZANIECZESCIAMI_H
