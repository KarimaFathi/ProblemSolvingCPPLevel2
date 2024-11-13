#include <iostream>
#include <string>
using namespace std;


string readWord() {
	string word;
	cout << "Please enter a word\n";
	cin >> word;
	return word;
}

string encryptWord(string word) {
	string wordAfterEnc = "";
	for (int i = 0; i < word.length(); i++) {
		wordAfterEnc += char(int(word[i]) + 2);
	}
	return wordAfterEnc;
}

string decryptWord(string word) {
	string wordAfterDec = "";
	for (int i = 0; i < word.length(); i++) {
		wordAfterDec += char(int(word[i]) - 2);
	}
	return wordAfterDec;
}


int main()
{
	string word = readWord();
	string encryptedWord = encryptWord(word);
	cout << "Text after encryption : " << encryptedWord << endl;
	cout << "Text after decryption : " << decryptWord(encryptedWord) << endl;
}

