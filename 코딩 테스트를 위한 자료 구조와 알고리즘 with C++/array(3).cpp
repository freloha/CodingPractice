#include <iostream>
#include <array>

using namespace std;

/*
* print 메소드는 배열의 크기가 고정되어 있다.
*/
void print(array<int, 5> arr) {
	cout << "print1 의 출력(고정된 배열 크기)" << endl;
	for (auto ele : arr) {
		cout << ele << " ";
	}
	cout << endl;
}

template <size_t N>
void print1(const array<int, N>& arr) {
	cout << "print1 의 출력(템플릿 사용으로 배열의 크기가 유동적)" << endl;
	for (auto ele : arr) {
		cout << ele << " ";
	}
	cout << endl;
}

/*
* array::begin() 함수는 첫 번째 원소를 가리키는 반복자를 반환, array::end() 함수는 마지막 원소 다음을 가리키는 반복자를 반환
* 해당 값의 참조(주소) 반환
*/
template <size_t N>
void print2(const array<int, N>& arr) {
	cout << "print1 의 출력(템플릿 사용으로 배열의 크기가 유동적)" << endl;
	cout << "arr.begin()? " << *arr.begin() << endl;
	for (auto it = arr.begin(); it != arr.end(); it++) {
		auto element = *it;
		cout << element << " ";
	}
	cout << endl;
}

int main() {
	array<int, 5> arr = { 1,2,3,4,5 };
	print(arr);

	print1(arr);

	print2(arr);
}