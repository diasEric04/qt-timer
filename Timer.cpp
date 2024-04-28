#include "mocs/Timer.moc"
#include <iostream>
#include <time.h>
#include <unistd.h>

Timer::Timer (int seconds, QObject *parent) :
    QObject {parent},
    secondsToFinish(seconds)
{}

void Timer::startTimer (void) {
    time_t now = time(nullptr);
    while (true) {
        try {
            emit checkTime(secondsToFinish, now);
            sleep(1);
        } catch (const StopTimer &e) {
            std::cout << "\ntimer finished\n";
            break;
        }
    }
}