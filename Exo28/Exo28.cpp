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

void copyArray(int arraySource[100], int arrayDestination[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrayDestination[i] = arraySource[i];
    }
}

int main()
{
    int array1[100];
    int arrLength;

    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

    int array2[100];
    copyArray(array1, array2, arrLength);
    
    cout << "\nArray 2 elements after copy: ";
    printArray(array2, arrLength);

    return 0;
}