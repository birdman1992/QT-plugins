#ifndef CIRCULARINSTRUMENT_H
#define CIRCULARINSTRUMENT_H

#include <QWidget>
#include <QGraphicsScene>
#include <QGraphicsTextItem>
#include <QShowEvent>

namespace Ui {
class CircularInstrument;
}

class CircularInstrument : public QWidget
{
    Q_OBJECT

public:
    explicit CircularInstrument(QWidget *parent = 0);
    ~CircularInstrument();

private:
    Ui::CircularInstrument *ui;
    QGraphicsScene* scene;

protected:
    void showEvent(QShowEvent*);
};

#endif // CIRCULARINSTRUMENT_H
