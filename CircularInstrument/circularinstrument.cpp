#include "circularinstrument.h"
#include "ui_circularinstrument.h"
#include <QDebug>

CircularInstrument::CircularInstrument(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CircularInstrument)
{
    ui->setupUi(this);
    scene = NULL;
}

CircularInstrument::~CircularInstrument()
{
    delete ui;
}

void CircularInstrument::showEvent(QShowEvent *)
{
    if(scene == NULL)
    {
        scene = new QGraphicsScene();
        scene->setSceneRect(ui->view->rect());
        ui->view->centerOn(ui->view->rect().center());
        ui->view->setScene(scene);
    }
}
