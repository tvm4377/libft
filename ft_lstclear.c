/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ecrabb <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/20 15:41:40 by ecrabb            #+#    #+#             */
/*   Updated: 2021/04/26 21:16:38 by ecrabb           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*tmp;

	if (!del)
		*lst = NULL;
	while (*lst)
	{
		tmp = *lst;
		*lst = NULL;
		del(tmp->content);
		*lst = tmp->next;
		free(tmp);
	}
	tmp = NULL;
}
