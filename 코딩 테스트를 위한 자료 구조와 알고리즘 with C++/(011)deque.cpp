#include <iostream>
#include <deque>

using namespace std;

int main() {
	deque<int> deq = { 1,2,3,4,5 };

	deq.push_front(0); // 0,1,2,3,4,5
	deq.push_back(6); // 0,1,2,3,4,5,6
	deq.insert(deq.begin() + 2, 10); // 0,1,10,2,3,4,5,6

	deq.pop_back(); // 맨 뒤 원소 삭제, 0,1,10,2,3,4,5
	deq.pop_front(); // 맨 앞 원소 삭제, 1,10,2,3,4,5
	deq.erase(deq.begin() + 1); // 1,2,3,4,5
	deq.erase(deq.begin() + 3, deq.end()); // 1.2.3.
}