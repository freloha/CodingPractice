#include <iostream>
#include <forward_list>

using namespace std;

int main() {
	forward_list<int> fwd_list = { 1,2,3 };

	fwd_list.push_front(0); // 맨 앞에 0 추가 {0,1,2,3}

	auto it = fwd_list.begin(); // 포인터로 동작하기 때문에 시간 복잡도 O(1), 포인터를 사용한다는 것이 중요
	
	fwd_list.insert_after(it, 5); // 맨 처음 원소 뒤에 5 추가 {0, 5, 1, 2, 3}
	
	fwd_list.insert_after(it, 6); // 같은 위치에 6 추가

	for (auto i : fwd_list) {
		cout << i << " " << endl;
	}

	forward_list<int> fwd_list1 = { 1,2,3 };

	fwd_list1.pop_front(); // 맨 앞 원소를 삭제 : {2. 3. 4. 5}

	auto it = fwd_list.begin();

	fwd_list.erase_after(it); // 맨 앞의 다음 원소를 삭제 : {2, 4, 5}

	fwd_list.erase_after(it, fwd_list.end()); // 맨 앞 원소 다음부터 맨 마지막 원소까지 삭제 : {2}
}