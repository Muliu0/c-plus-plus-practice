// boolean => true || false
// int =>
// char => -128 to 127
// void =>
// wchar_t =>
// struct
// class
// signed 
// unsigned
// short
// long => -2,147,483,648 to 2,147,483,647

#include <iostream>
using namespace std;

int main() {
	int a = 3;
	float b = 4.5;
	double c = 5.25;
	double sum;

	sum = a + b + c;

	cout << "The sum of a, b, and c is", sum << endl;
	return 0;
}