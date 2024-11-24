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



int countEvenNumbersIntoArray(int arraySource[100], int arrLength) {
    int counter = 0;
    for (int i = 0; i < arrLength; i++) {
        if (arraySource[i] % 2 == 0) {
            counter++;
        }
    }
    return counter;
}

int main()
{
    int array1[100];
    int arrLength;


    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray  elements: ";
    printArray(array1, arrLength);

    cout << "The number of Even numbers is : " << countEvenNumbersIntoArray(array1, arrLength) << endl;


    return 0;
}