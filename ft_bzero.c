/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:51:53 by aitor             #+#    #+#             */
/*   Updated: 2025/10/06 13:26:17 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Se encarga de rellenar un array con ceros.

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;
	char	*y;

	i = 0;
	y = (char *)s;
	while (i < n)
	{
		y[i] = '\0';
		i++;
	}
}
