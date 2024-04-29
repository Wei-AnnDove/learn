#pragma once
#ifndef LINkEDLIST_H
#define LINkEDLIST_H

struct Node
{
	int data;
	Node* next;
	Node(int val):data(val),next(nullptr){}
};

class LinkedList {
private:
	Node* head;

public:
	LinkedList();
	void append(int value);
	void reverse_loop();
	void print();
	~LinkedList();
	LinkedList(const LinkedList& other);
};

void _020_reverse();

#endif // !LINkEDLIST_H
