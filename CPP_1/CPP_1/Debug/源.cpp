#define _CRT_SECURE_NO_WARNINGS 1
#include <iostream>
using namespace std;
struct Node {
	int val;
	Node* next;

	Node(int _val) : val(_val), next(NULL) {}
};

int main() {
	Node* p = new Node(1);
	Node* q = new Node(2);
	Node* o = new Node(3);
	p->next = q;
	q->next = o;

	Node* head = p;

	Node* u = new Node(4);
	u->next = head; // 从头插入
	head = u;
	//删除节点
	head->next = head->next->next;
	for (Node* i = head; i; i = i->next) {
		cout << i->val << endl;
	}
}