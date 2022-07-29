#pragma once

#include <iostream>
#include <stdlib.h>

using namespace std;

struct node
{
    int data;
    node* next;
    node* prev; // used in doubly linked list
};

class linked_list
{
    node* head;

public:
    linked_list();
    node* get_head();
    void add_element(int data); // add at the end of list
    void add_element(int data, int place); // add at given place
    void remove(); // first node
    void remove(int place);
    void Clear();
    void reverse();
    void reverse_r(node* current); // reversing the linked list using recursion
    void print();
    void print(node* pointer); //printing using recursion
    void print_reverse(node* pointer); //printing in reverse order using recursion
    ~linked_list();
};



