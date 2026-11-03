// Program 1: Time class and addition of two Time objects
#include <iostream>
using namespace std;

class Time {
private:
    int hours, minutes, seconds;

public:
    void readTime();
    void showTime();
    void addTime(Time t1, Time t2);
};

void Time::readTime() {
    cout << "Enter time (hours minutes seconds separated by spaces): ";
    cin >> hours >> minutes >> seconds;
}

void Time::showTime() {
    cout << "Time: " << hours << ":" << minutes << ":" << seconds << endl;
}

void Time::addTime(Time t1, Time t2) {
    seconds = t1.seconds + t2.seconds;
    minutes = t1.minutes + t2.minutes + (seconds / 60);
    hours = t1.hours + t2.hours + (minutes / 60);
    seconds %= 60;
    minutes %= 60;
}

int main() {
    Time t1, t2, total;
    t1.readTime();
    t2.readTime();

    total.addTime(t1, t2);

    t1.showTime();
    t2.showTime();
    total.showTime();

    return 0;
}
