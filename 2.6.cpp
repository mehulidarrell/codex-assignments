#include <iostream>

using namespace std;

bool isPrime(int number) {
    if (number <= 1) {
        return false;
    }

    for (int i = 2; i * i <= number; ++i) {
        if (number % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int count = 0;
    int num = 2; 

    cout << "The first 5 prime numbers are: ";

    while (count < 5) {
        if (isPrime(num)) {
            cout << num << " ";
            count++;
        }
        num++;
    }

    return 0;
}
