#pragma once

//#include <stack>  can also import stack from library into the function
// syntax : stack <datatype> name;

#include "doubly_linked_list.h"
#include "list.h"

// can use all of above as stack but here going to use doubly linked list

class Stack
{
	doubly_linked_list stack;

public:
	Stack();
	void push(int data);
	void pop();
	void top();
	bool is_empty();
};

