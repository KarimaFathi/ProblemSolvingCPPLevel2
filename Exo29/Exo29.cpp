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

string isPrime(int num) {
    if (num == 1 || num == 0) {
        return "not Prime";
    }
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            return "not Prime";
        }
    }
    return "Prime";
}


int copyPrimesToArray(int arraySource[100], int arrayDestination[100], int arrLength ) {
    int arr2Length = 0;
    for (int i = 0; i < arrLength; i++) {
        if (isPrime(arraySource[i]) == "Prime") {
            arrayDestination[arr2Length] = arraySource[i];
                arr2Length++;
        }
    }
    return arr2Length;
}




int main()
{
    int array1[100];
    int arrLength;
    int arr2Length;


    srand((unsigned)time(NULL));
    readArrayData(array1, arrLength);

    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

    int array2[100];
    arr2Length = copyPrimesToArray(array1, array2, arrLength);

    cout << "\nPrime numbers in array 2 from array 1 : ";
    printArray(array2, arr2Length);

    return 0;
}
