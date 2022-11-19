/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroggens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:01:14 by sroggens          #+#    #+#             */
/*   Updated: 2022/05/22 17:36:17 by sroggens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	char	*s1;
	char	*s2;
	size_t	i;

	i = 0;
	s2 = (char *)src;
	s1 = (char *)dst;
	if (!s1 && !s2)
		return (0);
	while (n > i)
	{
		s1[i] = s2[i];
		i++;
	}
	return (s1);
}
