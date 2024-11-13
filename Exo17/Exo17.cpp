#include <iostream>
#include <string>
using namespace std;

string readLetterPassword(string message) {
    string passwd;
    do {
        cout << message;
        cin >> passwd;
    } while (passwd.length() != 3);
    return passwd;
}



int  guessPassword(string passwd) {
    cout << endl;
    string word = "";
    int counter = 0;
    for (int i = 65; i <= 90; i++) {
        for (int j = 65; j <= 90; j++) {
            for (int k = 65; k <= 90; k++) {
                word = word + char(i);
                word = word + char(j);
                word = word + char(k);
                counter++;
                cout << "Trial [" << counter << "] : " << word << endl;
                if (word == passwd) {
                    cout << "\nYour passwd is " << word << endl;
                    cout << "Found after " << counter << " trials." << endl;
                    return true;
                }
                word = "";
                
            }
        }
    }
    return false;
}



int main()
{
    guessPassword(readLetterPassword("Please enter a tree letter password (all capital). \n"));
    return 0;
}