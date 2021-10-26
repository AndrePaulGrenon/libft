/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: agrenon <agrenon@student.42quebec.>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/09/17 17:02:59 by agrenon           #+#    #+#             */
/*   Updated: 2021/10/14 11:25:24 by agrenon          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(const char *str)
{
	int			i;
	long long	res;
	long long	neg;

	neg = 1;
	res = 0;
	i = 0;
	while (str[i] == 32 || (str[i] < 14 && str[i] > 8))
		i++;
	if (str[i] == 45 || str[i] == 43)
	{
		if (str[i] == 45)
			neg = neg * (-1);
		i++;
	}
	while (str[i] < 58 && str[i] > 47)
	{
		res = (res * 10) + (str[i] - 48);
		i++;
	}
	return (res * neg);
}
