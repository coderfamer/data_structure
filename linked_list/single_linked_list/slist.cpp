#include "slist.hpp"

#include <iostream>


node *create_slist(int n) 
{
    node *head = new node(0);

    node *tmp = head;
    for (int i = 1; i < n; ++i) {
        tmp->next = new node(i);
        tmp = tmp->next;
    }
    tmp->next = nullptr;

    return head;
}


node *print_list(node *head)
{
    node * tmp = head;
    while (tmp != nullptr) {
        std::cout << tmp->data << " ";
        tmp = tmp->next;
    }
    std::cout << std::endl;
}


node * reverse_slist(node *head)
{
    node *pleft = nullptr;
    node *pcurrent = head;
    node *pright = head->next;


    while (pright) {
        pcurrent->next = pleft;
        node *temp = pright->next;
        pright->next = pcurrent;
        pleft = pcurrent;
        pcurrent = pright;
        pright = temp;
    }

    return pcurrent;
}
