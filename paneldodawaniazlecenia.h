#ifndef PANELDODAWANIAZLECENIA_H
#define PANELDODAWANIAZLECENIA_H

#include <QWidget>

namespace Ui {
class PanelDodawaniaZlecenia;
}

class PanelDodawaniaZlecenia : public QWidget
{
    Q_OBJECT

public:
    explicit PanelDodawaniaZlecenia(QWidget *parent = nullptr);
    ~PanelDodawaniaZlecenia();

private:
    Ui::PanelDodawaniaZlecenia *ui;
};

#endif // PANELDODAWANIAZLECENIA_H
