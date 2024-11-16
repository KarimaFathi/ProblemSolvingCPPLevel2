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

float  AverageFromArray(int array[100], int arrLength) {
    int sum = 0;
    float average;
    for (int i = 0; i < arrLength; i++) {
        sum += array[i];
    }
    average = (float)sum / arrLength;
    return average;
}




int main()
{
    int array[100];
    int arrLength;

    srand((unsigned)time(NULL));
    readArrayData(array, arrLength);
    printArray(array, arrLength);
    cout << "The average of all numbers is : " << AverageFromArray(array, arrLength);

    return 0;
}