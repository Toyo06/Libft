/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroggens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/22 17:15:51 by sroggens          #+#    #+#             */
/*   Updated: 2022/09/19 11:46:32 by sroggens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*nextone;

	nextone = malloc(sizeof(t_list));
	if (!nextone)
		return (NULL);
	nextone->content = content;
	nextone->next = NULL;
	return (nextone);
}
