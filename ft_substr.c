/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/02 15:03:40 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 19:50:54 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*dst;

	dst = (char *)malloc(sizeof(char) * (len + 1));
	if (!dst)
		return (NULL);
	dst[0] = '\0';
	if (ft_strlen(s) < start)
		return (dst);
	dst[len] = '\0';
	while (len--)
		dst[len] = s[start + len];
	return (dst);
}
