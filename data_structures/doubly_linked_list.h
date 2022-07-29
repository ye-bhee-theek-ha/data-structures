#pragma once

#include "linked_list.h"

using namespace std;


class doubly_linked_list
{
    node* head;
    node* tail;
public:
    doubly_linked_list();
    void add_element(int data);
    void add_element_at_head(int data);    // push for stack
    void add_element(int data, int place);
    node* get_head();
    void remove();                         // removing at the end
    void remove_at_head();                 // pop for stack
    void remove(int place);
    void Clear();
    void print();
    ~doubly_linked_list();
};



