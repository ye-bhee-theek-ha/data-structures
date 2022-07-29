#include "linked_list.h"

linked_list::linked_list()
{
	head = NULL;
}


node* linked_list::get_head()
{
	return head;
}


void linked_list::add_element(int data)
{
	node* temp = new node();
	temp->data = data;
	temp->next = NULL;

	if (head == NULL)
	{
		head = temp;
	}
	else
	{
		node* temp2 = head;

		while (temp2->next != NULL)
		{
			temp2 = temp2->next;
		}

		temp2->next = temp;
	}
}


void linked_list::add_element(int data, int place)
{
	node* element = new node();
	element->data = data;

	node* temp = head;
	
	if (place > 0)
	{
		for (int i = 0; i < place - 1; i++) // to get the node behind required element
		{
			if (temp == NULL)
			{
				cout << "\n index out of range";
				return;
			}
			else
			{
				temp = temp->next;
			}
		}

		element->next = temp->next;
		temp->next = element;
	}
	else if (place == 0)
	{
		element->next = head;
		head = element;
	}
	else
	{
		cout << "\n index out of range \n";
	}
	
}


void linked_list::remove()
{
	// removes the first element
	node* temp = head;
	head = temp->next;
	delete[] temp;
}


void linked_list::remove(int place)
{
	if (place == 0)
	{
		remove();
		return;
	}

	node* temp = head;

	for (int i = 0; i < place - 1; i++)
	{
		if (temp->next->next == NULL)
		{
			cout << "\nindex out of range\n";
			return;
		}
		temp = temp->next;
	}

	node* temp2 = temp->next;

	temp->next = temp2->next;
	delete[] temp2;
}

void linked_list::Clear()
{
	node* temp = head;

	while (temp != NULL)
	{
		head = head->next;

		delete[] temp;
		temp = head;
	}
}

void linked_list::reverse()
{
	node* current;
	node* nxt;
	node* prev;

	current = head;
	prev = NULL;				 // as last node points to null when we reverse we point first to null

	while (current != NULL)
	{
		nxt = current->next;	 // pointing to 3 cosecutive nodes by prev, current, next
		current->next = prev;	 // current node to point to previous node
		prev = current;			 // moving one node forward
		current = nxt;			 // moving one node forward
	}

	head = prev;				 // after loop ends current will be equal to next which is null and previos will point to current so make head equal to prev

}

void linked_list::reverse_r(node* current)
{
	if (current->next == NULL)
	{
		head = current;
		return;
	}

	reverse_r(current->next); // first traverse to the end of list

	node* next = current->next; // these 2 lines can alse be written as current->next->next = current
	next->next = current; // the next node will point to the current node
	current->next = NULL;

}



void linked_list::print()
{
	node* temp = head;

	cout << "\n";

	while (temp != NULL)
	{
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << "\n";
}

void linked_list::print(node* pointer)
{
	if (pointer == NULL)
	{
		cout << "\n";
		return;
	}
	else if (pointer == head)  // newline before printing
	{
		cout << "\n";
	}

	cout << pointer->data << " ";
	print(pointer->next); // the function will print the current node and then call the function again with the next node until end of list is reached
}


void linked_list::print_reverse(node* pointer)
{
	if (pointer == NULL)
	{
		cout << "\n";
		return;
	}
	else if (pointer == head) // newline before printing
	{
		cout << "\n";
	}

	print_reverse(pointer->next); // the function will call itself until end of linked of linked list is reached and then print from the end of the list
	cout << pointer->data << " ";
}


linked_list::~linked_list()
{
	cout << "destructor called";
}
