#include <iostream>
using namespace std;

float readNumber() {
	float num;
	cout << "Please enter a number. \n";
	cin >> num;
	return num;
}



float getFractionPart(float number) {
	return (abs(number) - (int)abs(number));
}

int myRound(float number) {
	int intPart = int(number);
	if (getFractionPart(number) >= 0.5) {
		if (number > 0) {
			return intPart + 1;
		}
		else return intPart - 1;
	}
	else return intPart;
}


int main()
{
	float num = readNumber();
	cout << "My Round result : " << myRound(num) << endl;
	cout << "C++ Round result : " << round(num) << endl;
}
