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

int random(int from, int to) {
    int randNum = rand() % (from - to + 1) + from;
    return randNum;
}

void readArrayData(int array[100], int arrLength) {
    cout << endl;
    for (int i = 0; i < arrLength; i++) {
        array[i] = i + 1;
    }
}

void printArray(int array[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int hasDigitFrequency(short digit, int array[100], int arrLength) {
    int totalFrequency = 0;
    for (int i = 0; i < arrLength; i++) {
        if (array[i] == digit)
            totalFrequency += 1;
    }
    return totalFrequency;
}

void swap(int& A, int& B) {
    int temp = A;
    A = B;
    B = temp;
}

void shuffleArray(int arr[100], int arrLength) {
    for (int i = arrLength - 1; i > 0; i--) {
        swap(arr[random(1, arrLength) - 1], arr[random(1, arrLength) - 1]);
    }
}



int main()
{
    int array1[100];
    int arrLength = readPositiveNumber("How many elements ?\n");

    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

    shuffleArray(array1, arrLength);

    cout << "\nArray 1 elements after shuffle: ";
    printArray(array1, arrLength);
    return 0;
}

