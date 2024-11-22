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


int readArrayData(int array[100]) {
    cout << endl;
    int arrLength = 0;
    int choice;
    do {
        array[arrLength] = readPositiveNumber("Please enter a number ?\n");
        arrLength++;
        choice = readPositiveNumber("Do you want to add more numbers ? [0]:No,[1]:Yes ?\n");
        if (choice == 0) {
            break;
        }
        } while (arrLength < 100);
    return arrLength;
}

void printArray(int array[100], int arrLength) {
    for (int i = 0; i < arrLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}


int main()
{
    int array1[100];
    int arrLength = readArrayData(array1);

    cout << "\nArray Length : " << arrLength << endl;
    cout << "\nArray 1 elements: ";
    printArray(array1, arrLength);

  
    return 0;

}