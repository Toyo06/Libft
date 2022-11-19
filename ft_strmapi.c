/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroggens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 03:06:02 by sroggens          #+#    #+#             */
/*   Updated: 2022/05/16 16:32:40 by sroggens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (f)(unsigned int, char))
{
	char	*word;
	int		i;

	i = 0;
	if (!s)
		return (0);
	word = (char *)malloc(sizeof(char) * ft_strlen(s) + 1);
	if (word == 0)
		return (0);
	while (s[i])
	{
		word[i] = f(i, s[i]);
		i++;
	}
	word[i] = 0;
	return (word);
}
