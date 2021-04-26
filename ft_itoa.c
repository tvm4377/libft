/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/19 16:19:51 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 22:08:25 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_len(int n)
{
	int	len;

	len = 1;
	if (n < 0)
		len = 2;
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char			*nbr;
	unsigned int	len;
	unsigned int	nb;

	len = ft_len(n);
	nbr = (char *)malloc((1 + len) * sizeof(char));
	if (!nbr)
		return (NULL);
	nbr[len--] = '\0';
	if (n < 0)
		nbr[0] = '-';
	else
		nbr[0] = '0';
	nb = n;
	if (n < 0)
		nb = -n;
	while (nb)
	{
		nbr[len--] = nb % 10 + '0';
		nb = nb / 10;
	}
	return (nbr);
}
