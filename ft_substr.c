/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dchonvil <dchonvil@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/14 05:11:40 by dchonvil          #+#    #+#             */
/*   Updated: 2021/02/14 05:40:13 by dchonvil         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char		*box;
	size_t		i;
	size_t		s_len;
	size_t		size;

	if (!s)
		return (NULL);
	s_len = ft_strlen(s);
	size = s_len <= start ? 1 : len + 1;
	i = 0;
	if (!(box = ft_calloc(size, sizeof(char))))
		return (NULL);
	if (size == 1)
	{
		box[0] = '\0';
		return (box);
	}
	while (i < len)
	{
		box[i] = s[start + i];
		i++;
	}
	box[i] = '\0';
	return (box);
}
