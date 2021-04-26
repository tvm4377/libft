/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/04 16:08:32 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 19:51:59 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	len_needle;

	if (!*needle)
		return ((char *)haystack);
	len_needle = ft_strlen(needle);
	if (len < len_needle)
		return (NULL);
	len = len - len_needle + 1;
	while (len-- && *haystack)
	{
		if ((*((unsigned char *)haystack) == *((unsigned char *)needle))
			&& (!ft_strncmp(haystack, needle, len_needle)))
			return ((char *)haystack);
		haystack++;
	}
	return (NULL);
}
