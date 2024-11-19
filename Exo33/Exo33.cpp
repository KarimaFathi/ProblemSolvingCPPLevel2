#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


enum enRandom { smallLetter = 1, capitalLetter = 2, specialCharacter = 3, digit = 4 };


short readPositiveNumber(string message) {
    short number;
    do {
        cout << message;
        cin >> number;
    } while (number < 0);
    return number;
}

int random(int from, int to) {
    int randNum = rand() % (from - to + 1) + from;
    return randNum;
}


char getRandomChar(enRandom charType) {
    switch (charType) {
    case (::smallLetter):
        return char(random(97, 122));
        break;
    case (::capitalLetter):
        return char(random(65, 90));
        break;
    case (::specialCharacter):
        return char(random(32, 47));
        break;
    case (::digit):
        return char(random(48, 57));
        break;
    }
}

string generateWord(enRandom charType, short length) {
    string word = "";
    for (int i = 1; i <= length; i++) {
        word += getRandomChar(charType);
    }
    return word;
}

string generateKey() {
    string Key = "";
    Key = generateWord(::capitalLetter, 4) + "-";
    Key = Key + generateWord(::capitalLetter, 4) + "-";
    Key = Key + generateWord(::capitalLetter, 4) + "-";
    Key = Key + generateWord(::capitalLetter, 4);
    return Key;
}


void generateKeys(string arrayKeys[100], int numberOfKeys) {
    
    for (int i = 0; i < numberOfKeys; i++) {
        arrayKeys[i] = generateKey();
        /*cout << "Key [" << i << "] : " << generateKey() << endl;*/
    }
}

void printArray(string array[100], int arrLength) {
    cout << endl;
    for (int i = 0; i < arrLength; i++) {
        cout << "Array[" << i << "] : "  << array[i] << endl;
    }
    cout << endl;
}

int main()
{
    string arrayKeys[100];
    int numberOfKeys = readPositiveNumber("Please enter the number of keys you want to generate.\n");
    srand((unsigned)time(NULL));
    generateKeys(arrayKeys, numberOfKeys);
    printArray(arrayKeys, numberOfKeys);


    return 0;
}