/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/12 03:40:30 by dchonvil          #+#    #+#             */
/*   Updated: 2021/02/17 02:27:17 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void		*ft_memset(void *pointer, int value, size_t count)
{
	char *box;

	box = (char*)pointer;
	while (count--)
	{
		box[count] = value;
	}
	return (box);
}
