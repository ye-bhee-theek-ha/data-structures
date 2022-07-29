#pragma once

#include <iostream>

using namespace std;

class list
{
	int* list_array;
	int size;
	int total_size;

public:
	list();
	list(int* elements, int size);
	void increase_size();
	void add_element(int element);
	void print();
	void polling();
	void remove(int element);
	~list();
};
