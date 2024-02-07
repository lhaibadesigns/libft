#include "libft.h"
#include <stdio.h>

int main()
{
    t_list *head = NULL;
    t_list *last = ft_lstnew((char *)"end");
   // ft_lstadd_front(&head, ft_lstnew((char *)"amiineeeeee"));
    ft_lstadd_back(&head, last);
    printf("the last content is %s\n", (char *)last->content);
   // printf("head content is %s\n", (char *)head->next->content);
    return 0;
}