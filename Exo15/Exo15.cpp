#include <iostream>
#include <string>
using namespace std;

short readPositiveNumber(string message) {
    short digit;
    do {
        cout << message;
        cin >> digit;
    } while (digit < 0);
    return digit;
}


void printLetterPattern(int digit) {
    cout << endl;
    for (int i = 1; i <= digit; i++) {
        for (int j = 1; j <= i; j++) {
            cout << char(i + 64);
        }
        cout << endl;
    }
}
int main()
{
    printLetterPattern(readPositiveNumber("Please enter a digit\n"));
    return 0;
}
