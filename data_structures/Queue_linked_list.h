#pragma once

#include <iostream>
#include "linked_list.h" // just to include node

using namespace std;

// using singally linked list
class Queue_linked_list
{
	node* head;
	node* tail;
public:

	Queue_linked_list();
	bool is_empty();
	void Enqueue(int data);
	void Dequeue();
	void Clear();
	void Front();
	void print();
	~Queue_linked_list();

};

