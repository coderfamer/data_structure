#include "slist.hpp"

int main()
{
    node *head = create_slist(10);

    print_list(head);

    head = reverse_slist(head);

    print_list(head);

    



    return 0;
}