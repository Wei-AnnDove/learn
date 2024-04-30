#include <iostream>
#include "022Stack_To_Queue.h"

void StackToQueue::transferElements() {
	while (!inStack.empty())
	{
		outStack.push(inStack.top());
		inStack.pop();
	}
}

void StackToQueue::enqueue(int x) {
	inStack.push(x);
}

int StackToQueue::dequeue() {
    // 如果输出栈为空，将输入栈中的元素转移到输出栈
    if (outStack.empty()) {
        transferElements();
    }

    // 如果输出栈仍为空，说明队列为空，返回-1
    if (outStack.empty()) {
        return -1; // 或者抛出异常
    }

    // 返回输出栈的栈顶元素，并将其弹出
    int front = outStack.top();
    outStack.pop();
    return front;
}

bool StackToQueue::empty() {
    return inStack.empty() && outStack.empty();
}

void _022_Stack_To_Queue() {
    StackToQueue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    std::cout << q.dequeue() << std::endl; // 输出 1
    std::cout << q.dequeue() << std::endl; // 输出 2
    q.enqueue(4);
    std::cout << q.dequeue() << std::endl; // 输出 3
    std::cout << q.dequeue() << std::endl; // 输出 4
    std::cout << q.dequeue() << std::endl; // 输出 -1（队列为空，返回-1）
}