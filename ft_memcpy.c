/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:00:33 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/08 12:03:18 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Copia en destino, lo que haya en src sin importarle si se copia bien.

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
