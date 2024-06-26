#include "LinkedList.h"
#include <iostream>

using namespace std;

LinkedList::LinkedList():head(nullptr){}

void LinkedList::append(int value) {
	ListNode* newNode = new ListNode(value);
	if (head == nullptr) {
		head = newNode;
	}
	else {
		ListNode* current = head;
		while (current->next!=nullptr)
		{
			current = current->next;
		}
		current->next = newNode;
	}
}

void LinkedList::reverse_loop() {
	if (nullptr == head || nullptr == head->next) {
		return;
	}
	ListNode* prev = nullptr;
	ListNode* current = head;
	ListNode* next = nullptr;
	while (current!=nullptr)
	{
		next = current->next;//寻找当前节点下个节点
		current->next = prev;//当前节点指向上个节点
		prev = current;//当前节点变为上个节点
		current = next;//下个节点成为当前节点
	}
	head = prev;
}

void LinkedList::print() {
	ListNode* current = head;
	while (current!=nullptr)
	{
		cout << current->data << " ";
		current = current->next;
	}
	cout << endl;
}

LinkedList::~LinkedList() {
	ListNode* current = head;
	ListNode* next;
	while (current!=nullptr)
	{
		next = current->next;
		delete current;
		current = next;
	}
	head = nullptr;
}

LinkedList::LinkedList(const LinkedList& other) :head(nullptr) {
	// 深复制链表
	if (other.head != nullptr) {
		ListNode* currentOther = other.head;
		ListNode* currentNew = new ListNode(currentOther->data);
		head = currentNew;
		currentOther = currentOther->next;
		while (currentOther != nullptr) {
			currentNew->next = new ListNode(currentOther->data);
			currentNew = currentNew->next;
			currentOther = currentOther->next;
		}
	}
}

void LinkedList::reverse_recursion() {
	head = reverseRecursive(head, nullptr);
}

ListNode* LinkedList::reverseRecursive(ListNode* current, ListNode* prev) {
	if (current == nullptr) {
		return prev;
	}
	ListNode* next = current->next;
	current->next = prev;
	return reverseRecursive(next, current);
}




void _020_reverse() {
	//cout << "1" << endl;
	LinkedList list;
	list.append(1);
	list.append(2);
	list.append(3);
	list.append(4);
	list.append(5);

	cout << "原单链表: ";
	list.print();

	//LinkedList list1 = list;
	//list1.print();

	list.reverse_loop();
	cout << "reverse_loop: ";
	list.print();
	//list1.print();//深复制

	list.reverse_recursion();
	cout << "reverse_recursion: ";
	list.print();

}