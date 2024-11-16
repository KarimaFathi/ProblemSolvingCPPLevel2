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
    cout << "\nArray elements: ";
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

int findMinInArray(int array[100], int arrLength) {
    int minNumber = array[0];
    for (int i = 1; i < arrLength; i++) {
        if (minNumber > array[i]) {
            minNumber = array[i];
        }
    }
    return minNumber;
}


int main()
{
    int array[100];
    int arrLength;

    srand((unsigned)time(NULL));
    readArrayData(array, arrLength);
    printArray(array, arrLength);
    cout << "Min number is " << findMinInArray(array, arrLength);

    return 0;
}