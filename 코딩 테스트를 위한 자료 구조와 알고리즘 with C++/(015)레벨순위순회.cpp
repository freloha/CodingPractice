#include <iostream>
#include <queue>

using namespace std;

struct node {
	string position;
	node* first;
	node* second;
};

struct org_tree {
	node* root; // 사장님
	
	static org_tree create_org_structhre(const string& pos) {
		org_tree tree;
		tree.root = new node{ pos, NULL, NULL };

		return tree;
	}

	static node* find(node* root, const string& value) { // 트리에서 직원을 찾음
		if (root == NULL) // 사장이 없으면 무
			return NULL;

		if (root->position == value) // 사장님이 찾는 직책이면 사장님 반환
			return root;

		auto firstFound = org_tree::find(root->first, value); // 이 구문이 동작하는 순간 first가 root 역할을 하며 계속 아래로 찾아나감

		if (firstFound != NULL) // NULL이 아니면 1) 아래로 찾으러 내려가거나, 2) 해당 root가 찾는 직책
			return firstFound;

		return org_tree::find(root->second, value); // 혹은 second로부터 계속 찾으러 내려감
	}

	bool addSubordinate(const string& manager, const string& subordinate) { // subordinate = 종속된
		auto managerNode = org_tree::find(root, manager);

		if (!managerNode) {
			cout << manager << "을(를) 찾을 수 없습니다 : " << endl;
			return false;
		}

		if (managerNode->first && managerNode->second) { // first, second 모두 비어있지 않으면 종속될 수 없음
			cout << manager << " 아래에 " << subordinate << "을(를) 추가할 수 없습니다." << endl;
			return false;
		}

		if (!managerNode->first)
			managerNode->first = new node{ subordinate, NULL, NULL };
		else
			managerNode->second = new node{ subordinate, NULL, NULL };

		cout << manager << " 아래에 " << subordinate << "을(를) 추가했습니다." << endl;

		return true;
	}

	/*
	* 레벨 순서 순회
	*/
	static void levelOrder(node* start) {
		if (!start)
			return;

		queue<node*> q;
		q.push(start);
		while (!q.empty()) {
			int size = q.size();
			
			for (int i = 0; i < size; i++) {
				auto current = q.front();
				q.pop();

				cout << current->position << ", ";
				if (current->first)
					q.push(current->first);
				if (current->second) 
					q.push(current->second);
			}
			cout << endl;
		}
	}
};

int main() {
	/*
	* 사장 - 부사장 - IT부장(보안팀장, 앱개발팀장), 마케팅부장(물류팀장, 홍보팀장)
	* 이진트리로 표현
	*/
	auto tree = org_tree::create_org_structhre("CEO");

	tree.addSubordinate("CEO", "부사장");
	tree.addSubordinate("부사장", "IT부장");
	tree.addSubordinate("부사장", "마케팅부장");
	tree.addSubordinate("IT부장", "보안팀장");
	tree.addSubordinate("IT부장", "앱개발팀장");
	tree.addSubordinate("마케팅부장", "물류팀장");
	tree.addSubordinate("마케팅부장", "홍보팀장");
	tree.addSubordinate("부사장", "재무부장");

	cout << endl;

	tree.levelOrder(tree.root);
}