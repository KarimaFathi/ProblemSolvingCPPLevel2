#include <iostream>
#include <string>
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
        array[i] = random(1, 100);
    }
}

void printArray(int array[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}



void sumTwoArrays(int array1[100], int array2[100], int arrSum[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        arrSum[i] = array1[i] + array2[i];
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

    int array2[100];
 
    readArrayData(array2, arrLength);
    cout << "\nArray 2 elements : ";
    printArray(array2, arrLength);
    
    int arrSum[100];
    sumTwoArrays(array1, array2, arrSum, arrLength);
    cout << "\nSum of array 1 and array 2 elements : ";
    printArray(arrSum, arrLength);
    return 0;
}

