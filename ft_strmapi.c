/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 13:59:13 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 19:54:44 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	char			*str;

	if (!s || !f)
		return (NULL);
	str = (char *)malloc((1 + ft_strlen(s)) * sizeof(char));
	if (!str)
		return (NULL);
	i = 0;
	while (*s)
		*str++ = f(i++, *s++);
	*str = '\0';
	return (str - i);
}
