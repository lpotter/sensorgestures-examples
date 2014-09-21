#ifndef GESTUREREADER_H
#define GESTUREREADER_H

#include <QObject>
class QSensorGesture;

class GestureReader : public QObject
{
    Q_OBJECT
public:
    explicit GestureReader(QObject *parent = 0);

signals:

public slots:
    void gestureDetected(const QString &);
private:
    QSensorGesture *gesture;
    static const QString GESTURE;

};

#endif // GESTUREREADER_H
