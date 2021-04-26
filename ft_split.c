/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/09 19:17:27 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 21:01:51 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	**ft_free(char **out)
{
	free(out);
	while (out)
		free(out++);
	return (NULL);
}

static size_t	ft_w_count(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (!*s)
			break ;
		while (*s != c && *(s))
			s++;
		count++;
	}
	return (count);
}

static size_t	ft_w_len(char const *s, char c)
{
	size_t	w_len;

	w_len = 0;
	while (*s++ != c && *(s - 1))
		w_len++;
	return (w_len);
}

size_t	ft_load_out(size_t i, char **out, char const *s, char c)
{
	size_t	j;

	j = 0;
	while (*s != c && *s)
		out[i][j++] = *s++;
	out[i++][j] = '\0';
	return (i);
}	

char	**ft_split(char const *s, char c)
{
	size_t	w_count;
	char	**out;
	size_t	i;
	size_t	j;

	if (!s)
		return (NULL);
	w_count = ft_w_count(s, c);
	out = malloc(sizeof(char *) * (w_count + 1));
	if (!out)
		return (NULL);
	i = 0;
	while (i < w_count)
	{
		while (*s == c && *s)
			s++;
		out[i] = malloc(sizeof(char) * (ft_w_len(s, c) + 1));
		if (out[i])
			return (ft_free(out));
		i = ft_load_out(i, out, s, c);
	}
	out[i] = NULL;
	return (out);
}
