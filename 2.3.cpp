#include <iostream>
#include <iomanip>
#include <ctime>

using namespace std;

int main() {
    time_t currentTime = time(nullptr);
    tm* localTime = localtime(&currentTime);

    cout << "Current date and time: ";

    cout << put_time(localTime, "%A, %B %d, %Y "); // Weekday, Month Day, Year

    cout << put_time(localTime, "%I:%M:%S %p"); // Hours:Minutes:Seconds AM/PM

    return 0;
}
