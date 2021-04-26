/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/06 13:25:25 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 19:39:35 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int	sign;
	int	result;

	result = 0;
	sign = 1;
	while (*str && (*str == '\f' || *str == '\t' || *str == ' '
			|| *str == '\n' || *str == '\r' || *str == '\v'))
		str++;
	if (*str == '-' || *str == '+')
		if (*(str++) == '-')
			sign = -1;
	while ((*str) && (*str >= '0') && (*str <= '9'))
	{
		result *= 10;
		result += *(str++) - '0';
	}
	return (result * sign);
}
