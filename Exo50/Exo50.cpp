#include <iostream>
using namespace std;

float readNumber() {
	float num;
	cout << "Please enter a number. \n";
	cin >> num;
	return num;
}


int mySqrt(float number) {
	 return pow(number, 0.5);
}


int main()
{
	float num = readNumber();
	cout << "My Sqrt result : " << mySqrt(num) << endl;
	cout << "C++ Sqrt result : " << sqrt(num) << endl;
}
