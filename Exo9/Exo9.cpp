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

void countAllDigitsFrequency(long num) {
    for (int i = 0; i <= 9; i++) {
       findDigitFrequency(num, i);
       if (findDigitFrequency(num, i) > 0) {
           cout << "\nDigit " << i << " Frequency is " << findDigitFrequency(num, i) << " time(s)";
       }
    }
}



int main()
{
    long num = readPositiveNumber("Please enter a positive number.\n");
    countAllDigitsFrequency(num);
    return 0;
}
