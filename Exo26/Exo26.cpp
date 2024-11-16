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

int sumArrayNumbers(int array[100], int arrLength) {
    int sum = 0;
    for (int i = 0; i < arrLength; i++) {
            sum += array[i];
        }
    
    return sum;
}


int main()
{
    int array[100];
    int arrLength;

    srand((unsigned)time(NULL));
    readArrayData(array, arrLength);
    printArray(array, arrLength);
    cout << "Sum of all numbers is : " << sumArrayNumbers(array, arrLength);

    return 0;
}