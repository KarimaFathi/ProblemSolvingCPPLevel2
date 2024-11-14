#include <iostream>
#include <cstdlib>
#include <string>
using namespace std;


enum enRandom {smallLetter = 1, capitalLetter = 2, specialCharacter = 3, digit = 4};

int random(int from, int to) {
    int randNum = rand() % (from - to + 1) + from;
    return randNum;
}

char getRandomCharType(enRandom randomList) {
    switch (randomList) {
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

int main()
{
    srand((unsigned)time(NULL));
    enRandom randomList;
    cout << "Small Letter : " << getRandomCharType(::smallLetter) << endl;
    cout << "Capital Letter : " << getRandomCharType(::capitalLetter) << endl;
    cout << "Special Character : " << getRandomCharType(::specialCharacter) << endl;
    cout << "Digit : " << getRandomCharType(::digit) << endl;
    return 0;
}

