#include <iostream>
#include <forward_list>
#include <vector>

using namespace std;

int main() {
	vector<string> vec = { "Lewis H", "Lewis H", "Nico R", "Sebastian V", "Lewis H", "Sebastian V", "Sebastian V", "Sebastian V", "Fernando A" };

	auto it = vec.begin(); // 상수 시간
	cout << "가장 최근 우승자 : " << *it << endl;

	it += 8; // 상수 시간
	cout << "8년 전 우승자 : " << *it << endl;

	advance(it, -3); // 상수 시간
	cout << "그 후 3년 뒤 우승자 : " << *it << endl;

	forward_list<string> fwd(vec.begin(), vec.end());

	auto it1 = fwd.begin();
	cout << "가장 최근 우승자 : " << *it1 << endl;

	advance(it1, 5);
	cout << "5년 전 우승자 : " << *it1 << endl;

	//forward_list는 순방향으로만 이동할 수 있으므로 advance(it1, -2)와 같은 코드는 에러가 발생합니다.
}