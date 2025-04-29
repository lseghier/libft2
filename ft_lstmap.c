/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/28 19:06:12 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/28 19:06:12 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

t_list  *ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
    t_list	*new_list;
    t_list	*new_elem;
    void    *content;

    if (!lst || !f)
        return (NULL);
    new_list = NULL;
    while (lst)
    {
        content = f(lst->content);
        if (!(new_elem = ft_lstnew(content)))
        {
            ft_lstclear(&new_list, del);
            return (NULL);
        }
        ft_lstadd_back(&new_list, new_elem);
        lst = lst->next;
    }
    return (new_list);
}