#include <iostream>
using namespace std;


int readNumber(string message) {
    int number;

        cout << message;
        cin >> number;
   
    return number;
}


int myABS(int num) {
    if (num > 0) {
        return num;
    }
    else return -num;
}


int main()
{
    int num = readNumber("Please enter a negative number.\n");
    cout << "My ABS result : " << myABS(num) << endl;
    cout << "C++ ABS result : " << abs(num) << endl;
}




