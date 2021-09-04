#ifndef CUTPASTE_H
#define CUTPASTE_H

#include <QWidget>
#include "logger.h"

namespace Ui {
class Cutpaste;
}

class Cutpaste : public QWidget
{
    Q_OBJECT

public:
    explicit Cutpaste(QWidget *parent = nullptr);
    ~Cutpaste();

public slots:
    void slotCapture();

private:
    Ui::Cutpaste *ui;
};

#endif // CUTPASTE_H
