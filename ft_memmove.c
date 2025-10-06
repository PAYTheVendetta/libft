/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:34:06 by aitor             #+#    #+#             */
/*   Updated: 2025/10/06 16:09:34 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copia en destino, lo que haya en SRC asegurando que se copie bien.

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (len > i)
	{
		if (dst <= src)
		{
			d[i] = s[i];
			i++;
		}
		else
		{
			d[len - i - 1] = s[len - i - 1];
			i++;
		}
	}
	return (dst);
}
