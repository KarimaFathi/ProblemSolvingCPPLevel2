#include <iostream>
using namespace std;

short readPositiveNumber(string message) {
    short digit;
    do {
        cout << message;
        cin >> digit;
    } while (digit < 0);
    return digit;
}


void printInvertedNumberPattern(int digit) {
    cout << endl;
    for (int i = digit; i > 0; i--) {
        for (int j = 0; j < i; j++) {
            cout << i;
        }
        cout << endl;
    }
}


int main()
{
    printInvertedNumberPattern(readPositiveNumber("Please enter a digit\n"));
    return 0;
}

