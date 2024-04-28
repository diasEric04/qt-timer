#include "mocs/Clock.moc"
#include <time.h>
#include "headers/Timer.hpp"
#include <iostream>

Clock::Clock (QObject *parent) :
    QObject {parent}
{}

void Clock::checkTime (int secondsToFinish, int startSeconds) {
    time_t now = time(nullptr);
    
    long timeDiff {now - startSeconds};

    std::cout << "passed: " << timeDiff << " seconds" << std::endl;
 
    if (timeDiff >= secondsToFinish) throw StopTimer();
}