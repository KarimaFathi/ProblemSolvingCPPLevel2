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


void printInvertedLetterPattern(int digit) {
    cout << endl;
            for (int i = digit; i >= 1; i--) {
                for (int j = 1; j <= i; j++) {
                    cout << char(i + 64);
                }
                cout << endl;
            }   
}
int main()
{
    printInvertedLetterPattern(readPositiveNumber("Please enter a digit\n"));
    return 0;
}
