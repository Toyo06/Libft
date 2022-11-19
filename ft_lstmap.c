/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroggens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/15 07:40:39 by sroggens          #+#    #+#             */
/*   Updated: 2022/10/15 08:02:15 by sroggens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*tmp;
	t_list	*returnlist;

	returnlist = NULL;
	if (lst && (*f) && del)
	{
		while (lst)
		{
			tmp = ft_lstnew(lst->content);
			tmp->content = (*f)(tmp->content);
			ft_lstadd_back(&returnlist, tmp);
			lst = lst->next;
		}
	}
	return (returnlist);
}
