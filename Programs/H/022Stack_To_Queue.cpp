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
    // ������ջΪ�գ�������ջ�е�Ԫ��ת�Ƶ����ջ
    if (outStack.empty()) {
        transferElements();
    }

    // ������ջ��Ϊ�գ�˵������Ϊ�գ�����-1
    if (outStack.empty()) {
        return -1; // �����׳��쳣
    }

    // �������ջ��ջ��Ԫ�أ������䵯��
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
    std::cout << q.dequeue() << std::endl; // ��� 1
    std::cout << q.dequeue() << std::endl; // ��� 2
    q.enqueue(4);
    std::cout << q.dequeue() << std::endl; // ��� 3
    std::cout << q.dequeue() << std::endl; // ��� 4
    std::cout << q.dequeue() << std::endl; // ��� -1������Ϊ�գ�����-1��
}