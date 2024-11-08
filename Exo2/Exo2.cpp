#include <iostream>
#include <string>
using namespace std;

// we can use enum here too as another option.
int readPositiveNumber() {
    int number;
    do {
        cout << "Please enter a positive number.\n";
        cin >> number;
    } while (number < 0);
    return number;
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

void printPrimeNumbersFrom1toN(int num) {
  /*  string numPrime = ""*/
    cout << "\nPrime numbers are :\n";
    for (int i = 1; i <= num; i++) {
        if (isPrime(i) == "Prime") {
            /*numPrime += to_string(i) + " ";*/
            cout << i << endl;
        }
    }
    ///*return numPrime;*/
}




int main()
{
    printPrimeNumbersFrom1toN(readPositiveNumber());
    return 0;
}