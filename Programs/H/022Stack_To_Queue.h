#pragma once
#include <stack>

class StackToQueue {
private:
	std::stack<int> inStack;
	std::stack<int> outStack;

	void transferElements();

public:
	void enqueue(int x);
	int dequeue();
	bool empty();
};

void _022_Stack_To_Queue();