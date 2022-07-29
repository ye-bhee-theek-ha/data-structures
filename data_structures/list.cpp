#include "list.h"

list::list()
{
	list_array = new int[1];
	size = 0;
	total_size = 1;
}

list::list(int* elements, int size)
{
	list_array = new int[size];
	this->size = size;
	this->total_size = size;

	for (int i = 0; i < size; i++)
	{
		list_array[i] = elements[i];
	}
}


void list::increase_size()
{
	cout << "\n size increased \n";
	int* temp = new int[total_size];

	for (int i = 0; i < total_size; i++) // copying into temp
	{
		temp[i] = list_array[i];
	}

	list_array = new int[(total_size * 2)]; // doubling the size

	for (int i = 0; i < total_size; i++) // copying back the elements
	{
		list_array[i] = temp[i];
	}

	total_size *= 2;
	delete[] temp;
}


void list::add_element(int element) 
{
	if (total_size <= size) // if last element of the array is full
	{
		increase_size();
	}

	list_array[size] = element;
	size++;
}


void list::print()
{
	cout << endl;
	for (int i = 0; i < size; i++)
	{
		cout << list_array[i];
	}
	cout << endl;
}


void list::polling()
{
	size--;
}


void list::remove(int element)
{
	bool found = false;

	for (int i = 0; i < size; i++)
	{
		if (list_array[i] == element)
		{
			found = true;
			for (int j = i; j < size - 1; j++)
			{
				list_array[j] = list_array[j+1];
			}
			size--;
		}
	}
	if (!found)
	{
		cout << "\n element not present in the list";
	}
}


list::~list()
{
	cout << "destructor called";
	delete[] list_array;
}