/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:08:32 by ecrabb            #+#    #+#             */
/*   Updated: 2020/11/23 19:03:04 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;

	i = ft_strlen(s);
	if (*((unsigned char *)s + i) == (unsigned char)c)
		return ((char *)s + i);
	while (i)
	{
		if (*((unsigned char *)s + --i) == (unsigned char)c)
			return ((char *)s + i);
	}
	return (NULL);
}
