#include "libft.h"
#include "libft_bonus.h"

t_list  *ft_lstlast(t_list *lst)
{
    if (!lst)
        return (lst);
    while (lst->next)
        lst = lst->next;
    return (lst);
}