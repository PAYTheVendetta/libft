/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/07 15:39:10 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/08 15:05:24 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Comprueba si en el texto o string está
//un carácter dependiendo de una cantidad de caracteres. 

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (n > i)
	{
		if (((unsigned char *)s)[i] == (unsigned char)c)
		{
			return ((void *)(s + i));
		}
		i++;
	}
	return ((void *)0);
}
