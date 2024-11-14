#include <iostream>
#include <string>
using namespace std;


short readPositiveNumber(string message) {
    short number;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}



void readArrayData(int array[100], int &arrLength) {
    cout << "\nPlease enter the size of the array.\n";
    cin >> arrLength;
    cout << endl;
    for (int i = 0; i < arrLength; i++) {
        cout << "Element [" << i + 1 << "] : ";
        cin >> array[i];
    }
}

void printArray(int array[100], int arrLength) {
    cout << "\nOriginal array: ";
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}


void printDigitFrequency(short digit, int array[100], int arrLength) {
    int totalFrequency = 0;
    for (int i = 0; i < arrLength; i++) {
        if ( array[i] == digit)
        totalFrequency += 1;
    }

    cout << endl << digit << " is repeated " << totalFrequency << " time(s)" << endl;
}

int main()
{
    int array[100];
    int arrLength;

    readArrayData(array, arrLength);
    printArray(array, arrLength);

    int digit = readPositiveNumber("\nEnter the number you want to check ");
    printDigitFrequency(digit, array, arrLength);
    return 0;
}

