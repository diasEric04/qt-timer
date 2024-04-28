#pragma once

#include <QObject>

class StopTimer final {};

class Timer : public QObject {
    Q_OBJECT

private:
    int secondsToFinish;

public:
    explicit Timer (int secondsToFinish, QObject *parent = nullptr);
    void startTimer ();
public slots: 
signals:
    void checkTime (int __secondsToFinish, int __startSeconds);
};