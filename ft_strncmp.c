/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:03:40 by ecrabb            #+#    #+#             */
/*   Updated: 2020/11/19 20:16:58 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	while (n--)
	{
		if (*((unsigned char *)s1++) == *((unsigned char *)s2++))
		{
			if (*((unsigned char *)s1 - 1) == 0)
				return (0);
		}
		else if (*((unsigned char *)s1 - 1) > *((unsigned char *)s2 - 1))
			return (1);
		else
			return (-1);
	}
	return (0);
}
