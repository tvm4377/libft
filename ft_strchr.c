/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:08:32 by ecrabb            #+#    #+#             */
/*   Updated: 2020/11/23 18:53:19 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*((unsigned char *)s++) == (unsigned char)c)
			return ((char *)s - 1);
	}
	if (*((unsigned char *)s) == (unsigned char)c)
		return ((char *)s);
	return (NULL);
}
