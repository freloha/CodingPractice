#include <iostream>
#include <array>

/*
* std::array 에 대한 내용입니다.
* array는 메모리를 자동으로 할당하고 해제합니다.
*/

using namespace std;

int main() {
	array<int, 10> arr1; // 크기가 10인 int 타입의 배열
	arr1[0] = 1;
	cout << "arr1 배열의 첫 번째 원소 : " << arr1[0] << endl;

	array<int, 4> arr2 = { 1,2,3,4 };
	cout << "arr2의 모든 원수 : ";

	for (auto i : arr2) { // 배열 내 int 출력할 떄 for문의 조건식은 다음과 같이 쓰는 편이 타이핑이 편함
		cout << i << " ";
	}
	cout << endl;
}