#include <iostream>
using namespace std;

float readNumber() {
	float num;
	cout << "Please enter a number. \n";
	cin >> num;
	return num;
}



int myCeil(float number) {
	int intPart = int(number);
	if (number > 0) {
		return intPart + 1;
	}
	else return intPart ;
}


int main()
{
	float num = readNumber();
	cout << "My Ceil function result : " << myCeil(num) << endl;
	cout << "C++ ceil result : " << ceil(num) << endl;
}