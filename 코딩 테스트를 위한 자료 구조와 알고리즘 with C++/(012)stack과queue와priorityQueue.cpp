#include <iostream>
#include <stack>
#include <list>
#include <queue>

using namespace std;

int main() {
	stack<int, vector<int>> stk_vector; // 벡터를 이용한 스택
	stack<int, list<int>> stk_list; // 리스트를 이용한 스택

	queue<int> q;
	q.push(1); // 1
	q.push(2); // 1,2
	q.push(3); // 1,2,3
	q.pop(); // 2,3,
	q.push(4); // 2,3,4

	/*
	* priority queue는 입력이 들어가면 자동으로 정렬되어 내림차순으로 정렬 됨
	*/
	priority_queue<int> p_q;
	p_q.push(3); // 3
	p_q.push(4); // 4,3
	p_q.push(-2); // 4,3,-2
	int size = p_q.size();
	for (int i = 1; i <= size; i++) {
		cout << i << " : " << p_q.top() << endl;
		p_q.pop();
	}

}