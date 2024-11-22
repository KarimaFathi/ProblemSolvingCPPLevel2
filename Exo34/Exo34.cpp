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

int findDigitInArray(int array[100], int arrLength, int digit) {
    for (int i = 0; i < arrLength; i++) {
        if (array[i] == digit) {
            return i;
        }
       
    }
      return -1;
}

void printResult(int array[100], int arrLength, int digit) {
    cout << "Number you are looking for is : " << digit << endl;
    if (findDigitInArray(array, arrLength, digit) == -1) {
        cout << "The number is not found !\n";
    }
    else {
        cout << "The number found at position : " << findDigitInArray(array, arrLength, digit) << endl;
        cout << "The number found its order is : " << findDigitInArray(array, arrLength, digit) + 1 << endl;
    }
}

int main()
{
    int array1[100];
    int arrLength = readPositiveNumber("How many elements ?\n");
    int digitToSearch = readPositiveNumber("Please enter a number to search for ?\n");

    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);
    printResult(array1, arrLength, digitToSearch);

    return 0;

}