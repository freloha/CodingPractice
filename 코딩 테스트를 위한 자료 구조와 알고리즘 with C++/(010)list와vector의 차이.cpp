#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
	list<int> list1 = { 1,2,3,4,5 };

	list1.push_back(6); // 1,2,3,4,5,6
	list1.insert(next(list1.begin()), 0); // 1,0,2,3,4,5,6
	list1.insert(list1.end(), 7); // 1,0,2,3,4,5,6,7

	list1.pop_back(); // 1,0,2,3,4,5,6
	
	cout << "삽입 & 삭제 후 리스트 : ";
	for (auto i : list1)
		cout << i << " ";

	vector<int> vec = { 1,2,3,4,5 };
	auto v_it4 = vec.begin() + 4; // v_it4는 vec[4] 원소를 가리킵니다.
	vec.insert(vec.begin() + 2, 0); // v_it4 반복자는 무효화 됩니다. 마지막 문장을 앞전에서 가리켰는데 + 2가 되었기 떄문.

	list<int> lst = { 1,2,3,4,5 };
	auto l_it4 = next(lst.begin(), 4); // list의 시작점에서 4번째 다음, 즉, 5를 가리킴
	lst.insert(next(lst.begin(), 2), 0); // l_it4 반복자는 여전히 유효
}