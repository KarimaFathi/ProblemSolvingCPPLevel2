#include <iostream>
#include <string>
#include <cstdlib> 
using namespace std;


int readPositiveNumber(string message) {
    int elements;
    do {
        cout << message;
        cin >> elements;
    } while (elements <= 0);
    return elements;
}


int random(int from, int to) {
    int randNum = rand() % (from - to + 1) + from;
    return randNum;
}

void readArrayData(int array[100], int arrLength) {
    cout << endl;
    for (int i = 0; i < arrLength; i++) {
        array[i] = random(1, 100);
    }
}

void printArray(int array[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int findDigitInArray(int array[100], int arrLength, short digit) {
    for (int i = 0; i < arrLength; i++) {
        if (array[i] == digit) {
            return 1;
        }

    }
    return -1;
}



bool isNumberInArray(short digit, int arrLength, int array[100]) {
    return findDigitInArray(array, arrLength, digit) != -1;
}

int main()
{
    int array1[100];
    int arrLength = readPositiveNumber("How many elements ?\n");
   

    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

    short digitToSearch = readPositiveNumber("Please enter a number to search for ?\n");
    if (isNumberInArray) {
        cout << "Yes, it is found!";
    }
    else {
        cout << "No, the number is not found!";
    }

    return 0;

}