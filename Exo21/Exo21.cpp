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

// method 1 in one function specific to that exercice's need
//void generateKeys(int number) {
//    string keys = "";
//    for (int i = 1; i <= number; i++) {
//        cout << "Key [" << i << "] : ";
//        for (int j = 1; j <= 19; j++) {
//            if (j == 5 || j == 10 || j == 15) {
//                keys += "-";
//            }
//            else {
//                keys += char(random(65, 90));
//            }
//        }
//        cout << keys << endl;
//        keys = "";
//    }
//}

//method 2

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


void generateKeys(int numberOfKeys) {

    for (int i = 1; i <= numberOfKeys; i++) {
        cout << "Key [" << i << "] : " << generateKey() << endl;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    generateKeys(readPositiveNumber("Please enter the number of keys you want to generate.\n"));
   
    return 0;
}