#include "cutpaste.h"
#include "ui_cutpaste.h"

Cutpaste::Cutpaste(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Cutpaste)
{
    ui->setupUi(this);
    LOG_WARNING("select invailed excel file path!");
    connect(ui->pushButton, &QPushButton::clicked,
            this, &Cutpaste::slotCapture);
}

void Cutpaste::slotCapture()
{

}

Cutpaste::~Cutpaste()
{
    delete ui;
}
