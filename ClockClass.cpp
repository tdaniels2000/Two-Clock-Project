#include <iostream>

// Clock class
class Clock {
private:
    int hours;
    int minutes;
    int seconds;

public:
    // Constructor
    Clock(int h = 0, int m = 0, int s = 0) : hours(h), minutes(m), seconds(s) {}

    // Set the time
    void setTime(int h, int m, int s) {
        hours = h;
        minutes = m;
        seconds = s;
    }

    // Display the time
    void displayTime() const {
        std::cout << "Time: " << hours << ":" << minutes << ":" << seconds << std::endl;
    }

    // Add an hour to the time
    void addHour() {
        hours++;
    }

    // Add a minute to the time
    void addMinute() {
        minutes++;
    }

    // Add a second to the time
    void addSecond() {
        seconds++;
    }
};
