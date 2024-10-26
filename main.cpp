// Tyler Daniels
// 5-21-23
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

// Function to handle user input for initial time
void getUserInput(Clock& clock) {
    int hours, minutes, seconds;

    std::cout << "Enter initial time (hours minutes seconds): ";
    std::cin >> hours >> minutes >> seconds;

    clock.setTime(hours, minutes, seconds);
}

// Function to display the menu and get user choice
char displayMenu() {
    char choice;

    std::cout << "\nMenu:\n";
    std::cout << "1. Add Hour\n";
    std::cout << "2. Add Minute\n";
    std::cout << "3. Add Second\n";
    std::cout << "4. Exit\n";
    std::cout << "Enter your choice: ";
    std::cin >> choice;

    return choice;
}

// Function to process the user's choice
void processChoice(Clock& clock, char choice) {
    switch (choice) {
    case '1':
        clock.addHour();
        break;
    case '2':
        clock.addMinute();
        break;
    case '3':
        clock.addSecond();
        break;
    case '4':
        std::cout << "Exiting program...\n";
        exit(0);
    default:
        std::cout << "Invalid choice. Please try again.\n";
    }
}

int main() {
    // Create clock objects
    Clock clock1;
    Clock clock2;

    // Get user input for initial time
    getUserInput(clock1);
    getUserInput(clock2);

    // Main loop
    while (true) {
        // Display clocks
        std::cout << "\nClock 1: ";
        clock1.displayTime();
        std::cout << "Clock 2: ";
        clock2.displayTime();

        // Display menu and get user's choice
        char choice = displayMenu();

        // Process user's choice
        processChoice(clock1, choice);
        processChoice(clock2, choice);
    }

    return 0;
}
