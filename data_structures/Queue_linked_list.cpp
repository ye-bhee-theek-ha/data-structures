#include "Queue_linked_list.h"

Queue_linked_list::Queue_linked_list()
{
	head = NULL;
	tail = NULL;
}

bool Queue_linked_list::is_empty()
{
	if (head == NULL || tail == NULL)
	{
		return true;
	}
	return false;
}

void Queue_linked_list::Enqueue(int data)
{
	node* element = new node();
	element->data = data;

	if (is_empty())
	{
		head = tail = element;
	}
	else
	{
		tail->next = element;
		tail = element;
	}
}

void Queue_linked_list::Dequeue()
{
	if (is_empty())
	{
		cout << "\n the queue is empty\n";
		return;
	}

	node* temp = head;
	head = head->next;
	delete[] temp;
}

void Queue_linked_list::Clear()
{
	node* temp = head;

	while (temp != NULL)
	{
		head = head->next;

		delete[] temp;
		temp = head;
	}
	tail = NULL;
	head = NULL;
}

void Queue_linked_list::Front()
{
	if (is_empty())
	{
		cout << "\n the queue is empty\n";
		return;
	}

	cout << "\n" << head->data << "\n";
}

void Queue_linked_list::print()
{
	if (is_empty())
	{
		cout << "\n the queue is empty\n";
		return;
	}

	node* temp = head;

	cout << "\n";
	while (temp != NULL)
	{
		cout << " " << temp->data;
		temp = temp->next;
	}
	cout << "\n";
}

Queue_linked_list::~Queue_linked_list()
{
	Clear();
	cout << "\n destructor called \n";
}
