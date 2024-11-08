#include <iostream>
using namespace std;

int readPositiveNumber() {
    int number;
    do {
        cout << "Please enter a positive number.\n";
        cin >> number;
    } while (number < 0);
    return number;
}


int getDivisors(int number) {
    int sum = 0;
    for (int i = 1; i <= number / 2; i++) {
        if (number % i == 0) {
            sum += i;
        }
    }
    return sum;
}

string isPerfect(int number) {
    if (getDivisors(number) == number) {
        return "Perfect";
    }
    else return "not Perfect";
}

void printResult(int number) {
    cout << "\nthe number " << number << " is " << isPerfect(number) << endl;
}

int main()
{
    printResult(readPositiveNumber());
}

