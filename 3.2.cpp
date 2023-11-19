//question 2:
#include <iostream>
using namespace std;

enum Days { Sunday, Monday, Tuesday, Wednesday, Thursday, Friday, Saturday };

int calculateDaysRemaining(Days today) {
    return 6 - today;
}

int main() {
    Days currentDay = Wednesday;
    int daysRemaining = calculateDaysRemaining(currentDay);
    cout << "Days remaining in the week: " << daysRemaining << endl;
    return 0;
}

