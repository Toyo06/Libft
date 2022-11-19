/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sroggens <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/05/16 02:40:39 by sroggens          #+#    #+#             */
/*   Updated: 2022/05/16 17:19:22 by sroggens         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_itoalen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n = n * -1;
		len++;
	}
	if (n == 0)
		len++;
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	len = ft_itoalen(n);
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	if (n == 0)
		return (ft_strdup("0"));
	str = (char *)malloc(sizeof(char) * len + 1);
	str[len--] = 0;
	if (n < 0)
	{
		str[0] = '-';
		n *= -1;
	}
	while (n >= 10)
	{
		str[len--] = n % 10 + '0';
		n /= 10;
	}
	if (n >= 0 && n < 10)
		str[len] = n % 10 + '0';
	return (str);
}
