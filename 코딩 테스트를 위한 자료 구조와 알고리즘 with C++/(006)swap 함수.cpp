#include <iostream>
#include <vector>

using namespace std;

void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 5;
	cout << "swap 전 a : " << a << ", b : " << b << endl;
	swap(a, b);
	cout << "swap 후 a : " << a << ", b : " << b;
}