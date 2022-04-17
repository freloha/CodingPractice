#include <iostream>
#include <array>

using namespace std;

int main() {
	array<int, 5> arr = { 1,2,3,4,5 };
	cout << arr.front() << endl; // 배열의 첫 번쨰 원소에 대한 참조를 반환
	cout << arr.back() << endl; // 배열의 마지막 원소에 대한 참조를 반환
	cout << *(arr.data() + 1) << endl; // 배열 객체 내부에서 실제 데이터 메모리 버퍼를 가리키는 포인터를 반환
}