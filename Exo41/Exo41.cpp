#include <iostream>
using namespace std;


void fillArray(int arr[100], int& arrLength)
{
    arrLength = 6;
    arr[0] = 10;
    arr[1] = 20;
    arr[2] = 30;
    arr[3] = 30;
    arr[4] = 20;
    arr[5] = 10;
   
}

void printArray(int array[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

void copyArrayInReverseOrder(int arraySource[100], int arrayDestination[100], int arrLength) {
    int reverseCounter = arrLength;
    for (int i = 0; i < arrLength; i++) {
        reverseCounter--;
        arrayDestination[reverseCounter] = arraySource[i];
    }
}


bool isPalindromeArray(int arr[100], int reverseArr[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        if (arr[i] != reverseArr[i]) {
            return false;
        }
    }
    return true;
}

int main()
{
    int arr[100];
    int arrLength;
    int arrReverse[100];

    fillArray(arr, arrLength);

    cout << "Array Elements : ";
    printArray(arr, arrLength);
    copyArrayInReverseOrder(arr, arrReverse, arrLength);

    if (isPalindromeArray(arr, arrReverse, arrLength)) {
        cout << "\nYes, it is a Palindrome array";
    }
    else cout << "\nNo, it is not a Palindrome array";
}