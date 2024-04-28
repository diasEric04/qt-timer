#pragma once

#include <QObject>

class Clock : public QObject {
    Q_OBJECT

public:
    explicit Clock (QObject *parent = nullptr);

public slots:
    void checkTime (int secondsToFinish, int startSeconds);
signals:
};