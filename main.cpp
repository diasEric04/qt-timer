#include "Timer.cpp"
#include "Clock.cpp"
#include <QCoreApplication>
#include <iostream>

int main (int argc, char **argv) {
    QCoreApplication app (argc, argv);

    std::cout << "how many seconds do u wanna set the timer? ";
    int seconds {};
    std::cin >> seconds;

    fflush(stdin);

    Clock c;
    Timer t {seconds};

    QObject::connect (&t, &Timer::checkTime, &c, &Clock::checkTime);

    t.startTimer();

    return app.exec();
}