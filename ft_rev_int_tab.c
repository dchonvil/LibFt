/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/21 07:38:43 by dchonvil          #+#    #+#             */
/*   Updated: 2021/02/21 07:38:49 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_rev_int_tab(int *tab, int size)
{
	int c;
	int i;
	int box[size];

	c = 0;
	i = size - 1;
	while (c < size)
	{
		box[c] = tab[i];
		c++;
		i--;
	}
	c = 0;
	while (c < size)
	{
		*(tab + c) = box[c];
		c++;
	}
}
