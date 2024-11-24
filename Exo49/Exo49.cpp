#include <iostream>
using namespace std;

float readNumber() {
	float num;
	cout << "Please enter a number. \n";
	cin >> num;
	return num;
}

float GetFractionPart(float number)
{
	return number - int(number);
}


int myCeil(float number) {
	int intPart = int(number);
	if (abs(GetFractionPart(number)) > 0) {
		if (number > 0) {
			return intPart + 1;
		}
		else return intPart;
	}
	else return number;
}


int main()
{
	float num = readNumber();
	cout << "My Ceil function result : " << myCeil(num) << endl;
	cout << "C++ ceil result : " << ceil(num) << endl;
}