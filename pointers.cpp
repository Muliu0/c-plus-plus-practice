//https://www.learn-cpp.org/en/Pointers

#include <iostream>
using namespace std;

int main() {
	// declare n 
	int n = 1;

	// Create pointers for n
	void* p1;
	int* p2;

	p1 = &n;
	p2 = (int*)p1;
	*p2 += 1;

	cout << *p2 << endl;

	return 0;
}