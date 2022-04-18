#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 4> arr3 = { 1, 2, 3, 4 };
	
	try {
		cout << arr3.at(3) << endl;
		cout << arr3.at(4) << endl;
	}
	catch (const out_of_range& ex) { // out_of_range는 유효 범위를 벗어난 인수를 보고하기 위해 발상하는 모든 예외에 대한 클래스
		cerr << ex.what() << endl; // ex.what()은 ex.data()의 복사본
	}
}