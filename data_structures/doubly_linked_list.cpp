#include "doubly_linked_list.h"

doubly_linked_list::doubly_linked_list()
{
	head = NULL;
	tail = NULL;
}

void doubly_linked_list::add_element(int data)
{
	node* element = new node();
	element->data = data;

	if (head == NULL)
	{
		head = element;
		tail = element;
	}
	else
	{
		tail->next = element;
		element->prev = tail;
		tail = element;
	}

	
	
}

void doubly_linked_list::add_element_at_head(int data)
{
	node* element = new node();
	element->data = data;

	if (head == NULL)
	{
		head = element;
	}
	else
	{
		element->next = head;
		head->prev = element;
		head = element;
	}
}

void doubly_linked_list::add_element(int data, int place)
{
	node* element = new node();
	element->data = data;

	node* temp = head;

	for (int i = 0; i < place - 1; i++)
	{
		temp = temp->next;
	}

	node* temp2 = temp->next;

	element->prev = temp;
	element->next = temp2;
	temp->next = element;
	temp2->prev = element;
	
}

node* doubly_linked_list::get_head()
{
	return head;
}

void doubly_linked_list::remove()
{
	node* temp = tail;
	tail = tail->prev;
	tail->next = NULL;
	delete[] temp;
}

void doubly_linked_list::remove_at_head()
{
	node* temp = head;
	head = head->next;
	delete[] temp;
}

void doubly_linked_list::remove(int place)
{
	node* temp = head;
	
	for (int i = 0; i < place; i++)
	{
		if (temp->next == NULL) // chek if next node is NULL if true then break
		{
			cout << "\n index out of range\n";
			return;
		}
		temp = temp->next;
	}


	if (temp->next == NULL)
	{
		remove();
	}
	else
	{
		node* temp2 = temp->prev;
		temp2->next = temp->next;
		temp->next->prev = temp2;
		delete[] temp;
	}

}

void doubly_linked_list::Clear()
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


void doubly_linked_list::print()
{
	node* temp = head;
	
	cout << "\n";
	while (temp != tail->next) // the loop will end when temp = tail so we compare it to next node of tail
	{
		cout << " " << temp->data;
		temp = temp->next;
	}
	cout << "\n";
}


doubly_linked_list::~doubly_linked_list()
{
	Clear();
	cout << "\ndestructor called\n";
}

