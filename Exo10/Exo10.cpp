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

void printDigitsInOrder(int num) {
    int rest;
    int  remainder;
    string strIn = "";
    do {
        rest = num / 10;
        remainder = num % 10;
        cout << remainder << endl;
        num = rest;
    } while (rest > 0);
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
    printDigitsInOrder(reverseNumber(readPositiveNumber()));
    return 0;
}
