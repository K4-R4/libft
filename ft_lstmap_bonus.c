/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/19 10:28:39 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/20 18:42:00 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*node;
	void	*tmp;

	if (lst == NULL || f == NULL)
		return (NULL);
	node = lst;
	while (node != NULL)
	{
		tmp = node->content;
		node->content = f(tmp);
		if (del != NULL)
			del(tmp);
		node = node->next;
	}
	return (lst);
}
