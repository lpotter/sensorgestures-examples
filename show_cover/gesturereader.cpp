#include "gesturereader.h"
#include <QtSensors/qsensorgesture.h>
#include <QtSensors/qsensorgesturemanager.h>
#include <QDebug>

const QString GestureReader::GESTURE("Sailfish.cover");

GestureReader::GestureReader(QObject *parent) :
    QObject(parent)
{
    gesture = new QSensorGesture(QStringList() << "QtSensors.cover", this);
    connect(gesture, SIGNAL(detected(QString)), this, SLOT(gestureDetected(QString)));
    gesture->startDetection();
    if (!gesture->isActive())
        qDebug() << "gesture not active";
}

void GestureReader::gestureDetected(const QString &gestureId)
{
    qDebug() << gestureId;
}
