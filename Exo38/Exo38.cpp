#include <iostream>
#include <string>
using namespace std;


int random(int from, int to) {
    int randNum = rand() % (from - to + 1) + from;
    return randNum;
}

void readArrayData(int array[100], int& arrLength) {
    cout << "\nPlease enter the size of the array.\n";
    cin >> arrLength;
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

void addArrayElement(int number, int arr[100], int& arrLength) {
    arrLength++;
    arr[arrLength - 1] = number;
}

void copyOddNumbersIntoArray(int arraySource[100], int arrayDestination[100], int arrLength, int& arrLength2) {
    for (int i = 0; i < arrLength; i++) {
        if (arraySource[i] % 2 != 0) {
            addArrayElement(arraySource[i], arrayDestination, arrLength2);
        }
    }
}

int main()
{
    int array1[100];
    int arrLength;
    int arrLength2 = 0;

    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

    int array2[100];
    copyOddNumbersIntoArray(array1, array2, arrLength, arrLength2);

    cout << "\nArray 2 odd elements : ";
    printArray(array2, arrLength2);

    return 0;
}