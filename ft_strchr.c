/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroggens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/12 10:03:00 by sroggens          #+#    #+#             */
/*   Updated: 2022/05/18 08:28:14 by sroggens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	*ft_strchr(const char *s, int c)
{
	int	i;

	i = 0;
	if (!s)
		return (0);
	if (c > 127)
		return ((char *)s);
	while (s[i] && s[i] != c)
			i++;
	if (s[i] == c)
		return ((char *) s + i);
	return (NULL);
}
