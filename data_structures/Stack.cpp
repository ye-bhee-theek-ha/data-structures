#include "stack.h"

Stack::Stack()
{

}


void Stack::push(int data)
{
	stack.add_element_at_head(data);
}


void Stack::pop()
{
	stack.remove_at_head();
}


void Stack::top()
{
	if (is_empty())
	{
		cout << "\nstack is empty\n";
	}
	else
		cout << " " << stack.get_head()->data;
}


bool Stack::is_empty()
{
	if (stack.get_head() == NULL)
		return true;
	else
		return false;
}


