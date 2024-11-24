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

int myFloor(float number) {
	int intPart = int(number);
	if (abs(getFractionPart(number)) > 0) {
		if (number > 0) {
			return intPart ;
		}
		else return intPart - 1;
	}
	else return number;
}


int main()
{
	float num = readNumber();
	cout << "My Floor result : " << myFloor(num) << endl;
	cout << "C++ Floor result : " << floor(num) << endl;
}
