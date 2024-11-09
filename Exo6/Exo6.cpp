#include <iostream>
#include <string>
using namespace std;

int readPositiveNumber() {
    int number;
    do {
        cout << "Please enter a positive number.\n";
        cin >> number;
    } while (number < 0);
    return number;
}

int printDigitsInReversedOrder(int num) {
    int rest;
    int  remainder;
    int sum = 0;
    do {
        rest = num / 10;
        remainder = num % 10;
        sum += remainder;
        num = rest;
    } while (rest > 0);
    return sum;
}

int main()
{
    cout << endl << "the sum of digits is " << printDigitsInReversedOrder(readPositiveNumber()) << endl;
    return 0;
}
