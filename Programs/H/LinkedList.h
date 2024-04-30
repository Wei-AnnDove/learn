#pragma once
#ifndef LINkEDLIST_H
#define LINkEDLIST_H

struct ListNode
{
	int data;
	ListNode* next;
	ListNode(int val):data(val),next(nullptr){}
};

class LinkedList {
private:
	ListNode* head;

public:
	LinkedList();
	void append(int value);
	void reverse_loop();
	void print();
	~LinkedList();
	LinkedList(const LinkedList& other);

	void reverse_recursion();

private:
	ListNode* reverseRecursive(ListNode* current, ListNode* prev);
};

void _020_reverse();

#endif // !LINkEDLIST_H
