/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/06/09 11:00:54 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/01 09:39:51 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = ft_intlen(n);
	if (n < 0)
		len++;
	str = ft_strnew(len);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n = -n;
	}
	len--;
	while (len >= 0 && str[len] != '-')
	{
		str[len] = (n % 10) + '0';
		n -= n % 10;
		n /= 10;
		len--;
	}
	return (str);
}
