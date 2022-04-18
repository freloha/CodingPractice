#include <iostream>
#include <vector>

using namespace std;

int main() {
	vector<int> vec; // 크기가 0인 벡터 선언

	vector<int> vec1 = { 1,2,3,4,5 }; // 지정한 초깃값으로 이루어진 크기가 5인 벡터 선언

	vector<int> vec2(10); // 크기가 10인 벡터 선언

	vector<int> vec3(10, 5); // 크기가 10이고, 모든 원소가 5로 초기화된 벡터 선언

	/*
	* push_back의 동작과정
	* if size < capacity // 새 원소를 추가할 공간이 있으면, O(1)
	*	- 마지막 원소 다음에 val 저장
	*	- 벡터의 크기를 1 증가
	*	- return ;
	* if vector is already full // 할당된 메모리 공간이 가득 차 있는 경우, O(n)
	*	- 2*size 크기의 메모리를 새로 할당
	*	- 새로 할당한 메모리로 기존 원소 전부 복사/이동
	*	- 데이터 포인텉를 새로 할당한 메모리 주소로 지정
	*	- 마지막 원소 다음에 val을 저장하고, 백터 크기를 1만큼 증가
	*/
	vec.push_back(1); // 백터의 맨 마지막에 새로운 원소를 추가

	vec.insert(vec.begin(), 0); // 백터의 맨 앞에 0을 추가

	vec.insert(find(vec.begin(), vec.end(), 1), 4); // vec의 처음부터 끝까지 중에서 원소 1을 찾아서 그 뒤에 4를 추가

	vec.erase(vec.begin()); // 맨 첫 원소를 제거

	vec.erase(vec.begin() + 1, vec.begin() + 4); // 2번째 원소부터 4번째 앞 원소까지 제거, 총 원소 3개가 제거

	vec.clear(); // vec 내의 원소 전부 제거

	// vec.reserve(capacity); // 백터에서 사용할 용량을 지정, 지정 값이 현재 용량보다 크면 메모리를 매게변수만큼 재할당, 그렇지 않으면 아무런 동작 하지 않음

	vec.shrink_to_fit(); // 여분의 메모리 공간을 해제할 때 사용, shrink = 수축하다
}