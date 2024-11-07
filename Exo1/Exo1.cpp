#include <iostream>
using namespace std;

void generateMultiplicationTable() {
    cout << "\n\n\t\t\t Multiplication table From 1 to 10\n\n";

    for (int i = 1; i <= 10; i++) {
        cout << "\t" << i;

    }
    cout << endl;
    for (int i = 1; i <= 10; i++) {
        cout << "________";
        if (i == 10) {
            cout << "___";
        }

    }
    cout << endl;
    for (int k = 1; k <= 10; k++) {
        if (k != 10)
            cout << " " << k << "   |";
        else
            cout << " " << k << "  |";
        for (int j = 1; j <= 10; j++) {
            cout << "\t" << k * j;
        }
        cout << endl;
    }
}
int main()
{
    generateMultiplicationTable();
    return 0;
}



