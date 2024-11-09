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

int reverseNumber(int num) {
    int rest;
    int  remainder;
    int result = 0;
    do {
        rest = num / 10;
        remainder = num % 10;
        result = result * 10 + remainder;
        num = rest;
    } while (rest > 0);
    return result;
}


int main()
{
   cout << "\nReverse is " << reverseNumber(readPositiveNumber());
    return 0;
}

