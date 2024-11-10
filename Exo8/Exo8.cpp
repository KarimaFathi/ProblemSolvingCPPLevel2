#include <iostream>
#include <string>
using namespace std;

long readPositiveNumber(string message) {
    long number;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

int findDigitFrequency(long num, short digit) {
    int rest;
    int  remainder;
    int result = 0;
    do {
        rest = num / 10;
        remainder = num % 10;
         if (remainder == digit) {
                result++;
         }
        num = rest;
    } while (rest > 0);
    return result;
}


int main()
{   
    long num = readPositiveNumber("Please enter a positive number.\n");
    short digit = readPositiveNumber("Please enter one digit to check.\n");
    cout << "\nDigit " << digit << " Frequency is " << findDigitFrequency(num, digit) << " time(s)";
    return 0;
}
