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


void printNumberPattern(int digit) {
    cout << endl;
    for (int i = 1; i <= digit; i++) {
        for (int j = 1; j <= i; j++) {
            cout << i;
        }
        cout << endl;
    }
}


int main()
{
    printNumberPattern(readPositiveNumber("Please enter a digit\n"));
    return 0;
}
