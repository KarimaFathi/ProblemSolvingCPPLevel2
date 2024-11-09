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

//method 1
//void printDigitsInReversedOrder(int num) {
//    string numAsString = to_string(num);
//    int stringLength = numAsString.length();
//    for (int i = stringLength - 1; i >= 0; i--) {
//        cout << numAsString[i] << endl;
//    }
//}


//method 2
void printDigitsInReversedOrder(int num) {
    int rest ;
    int  remainder;
    do {
        rest =num/ 10;
        remainder = num % 10;
        cout << remainder << endl;
        num = rest;
    } while (rest > 0);
}

int main()
{
    printDigitsInReversedOrder(readPositiveNumber());
    return 0;
}
