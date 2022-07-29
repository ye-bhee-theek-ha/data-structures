#pragma once

#include <iostream>

using namespace std;

// using circular array for queue
// if next == size -> move to first OR  next = (next + 1) % size
class Queue_array
{
	int size;
	int* array;
	int front;
	int rear;

public:

	Queue_array();
	bool is_empty();
	void clear();
	void Enqueue(int data);
	void Dequeue();
	void Front();
	void print();
	~Queue_array();

};


// enque(push)
// deque(pop)
// front -> returns first
// isempty