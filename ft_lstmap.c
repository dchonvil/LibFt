/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/19 02:22:25 by dchonvil          #+#    #+#             */
/*   Updated: 2021/02/21 04:24:18 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static t_list	*lstnew(void *content)
{
	t_list	*box;

	if (!(box = malloc(sizeof(box))))
		return (NULL);
	box->content = content;
	box->next = NULL;
	return (box);
}

static void		lstadd_back(t_list **alst, t_list *new)
{
	t_list	*box;

	box = *alst;
	if (!box)
	{
		box = new;
		return ;
	}
	while (box->next != NULL)
		box = box->next;
	box->next = new;
}

t_list			*ft_lstmap(t_list *l, void *(*f)(void *), void (*del)(void *))
{
	t_list	*box;
	t_list	*tmp;
	t_list	*final;

	if (!l)
		return (NULL);
	box = l;
	if (!(final = lstnew((*f)(box->content))))
		return (NULL);
	while (box->next != NULL)
	{
		if ((tmp = lstnew((*f)(box->next->content))) == NULL)
		{
			(*del)(tmp->content);
			free(tmp->content);
		}
		lstadd_back(&final, tmp);
		box = box->next;
	}
	return (final);
}
