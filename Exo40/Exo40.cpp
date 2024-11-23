#include <iostream>
using namespace std;



int readPositiveNumber(string message) {
    int elements;
    do {
        cout << message;
        cin >> elements;
    } while (elements < 0);
    return elements;
}

void addArrayElement(int number, int arr[100], int& arrLength) {
    arrLength++;
    arr[arrLength - 1] = number;
}

void readArrayData(int array[100], int &arrLength) {
    cout << endl;
    bool choice = 1;
    do {
        addArrayElement(readPositiveNumber("Please enter a number ?\n"), array, arrLength);
        choice = readPositiveNumber("Do you want to add more numbers ? [0]:No,[1]:Yes ?\n");
    } while (choice);
}

void printArray(int array[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}


int findDigitFrequency(short digit, int array[100], int arrLength) {
    int totalFrequency = 0;
    for (int i = 0; i < arrLength; i++) {
        if (array[i] == digit)
            totalFrequency += 1;
    }
    return totalFrequency;
}




void fillArrayWithDistinctNumbers(int arraySource[100], int arrayDestination[100], int arrLength, int& arr2Length) {
    for (int i = 0; i < arrLength; i++) {
        if (findDigitFrequency(arraySource[i],arrayDestination, arr2Length) == 0)  {
            addArrayElement(arraySource[i], arrayDestination, arr2Length);
        }
    }
}



int main()
{
    int array1[100];
    int arrLength = 0;
    int arr2Length = 0;

    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

    int array2[100];
    fillArrayWithDistinctNumbers(array1, array2, arrLength, arr2Length);

    cout << "\nArray 2 distinct elements : ";
    printArray(array2, arr2Length);

    return 0;

}

