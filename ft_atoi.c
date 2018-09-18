/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rerasmus <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/05/29 15:15:48 by rerasmus          #+#    #+#             */
/*   Updated: 2017/08/07 10:45:51 by rerasmus         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_atoi(const char *str)
{
	int				ans;
	int				x;

	ans = 0;
	x = 1;
	while (ft_isspace(*str))
		str++;
	if (*str == '-')
		x = -1;
	if (*str == '+' || *str == '-')
		str++;
	while (*str && ft_isdigit(*str))
	{
		ans += *str - '0';
		if (!ft_isdigit(*(str + 1)))
			return (ans * x);
		ans *= 10;
		str++;
	}
	return (ans * x);
}
