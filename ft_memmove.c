/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:03:40 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 21:11:33 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (!dst && !src)
		return (NULL);
	if ((unsigned char *)dst > (unsigned char *)src)
		while (len--)
			*((unsigned char *)(dst + len)) = *((unsigned char *)(src + len));
	else
		while (len--)
			*((unsigned char *)dst + i++) = *((unsigned char *)src++);
	return (dst);
}
