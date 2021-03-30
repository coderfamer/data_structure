#define once

typedef struct node{
    node(int d) : data(d), next(nullptr) {}

    int data;
    node *next;
}node;


node *create_slist(int n);


node *print_list(node *head);

node *reverse_slist(node *head);




