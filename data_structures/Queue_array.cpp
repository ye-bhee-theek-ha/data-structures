#include "Queue_array.h"

Queue_array::Queue_array()
{
	size = 10;
	array = new int[size];
	front = -1;
	rear = -1;
}


bool Queue_array::is_empty()
{
	if (front == -1 || rear == -1)
		return true;

	return false;
}

void Queue_array::clear()
{
	front = -1;
	rear = -1;
}

void Queue_array::Enqueue(int data)
{
	if (is_empty())
	{
		front = 0;
		rear = 0;
		array[rear] = data;
	}
	else
	{
		if (((rear + 1) % size) == front) // if next is the front
		{
			cout << "\n array is full fist dequeing\n";
			Dequeue();
		}
		rear = (rear + 1) % size;
		array[rear] = data;
	}
}

void Queue_array::Dequeue()
{
	if (front == rear) // if only one element in the array
	{
		cout << "\n only one element in array before dequeueing\n array cleared.\n";
		clear();
	}
	else
	{
		cout << "\n dequeueing. \n";
		front = (front + 1) % size;
	}
}

void Queue_array::Front()
{

	if (!is_empty())
	{
		cout << "\n" << array[front] << "\n";
	}
	else
	{
		cout << "\n queue is empty\n";
	}
}

void Queue_array::print()
{
	if (!is_empty())
	{
		int temp;
		for (temp = front; temp != rear; temp = (temp + 1) % size)
		{
			cout << " " << array[temp];
		}
		cout << " " << array[temp];

		cout << "\n";
	}
	else
	{
		cout << "\n queue is empty\n";
	}
}

Queue_array::~Queue_array()
{
	delete[] array;
}
