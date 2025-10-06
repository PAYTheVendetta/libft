/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:46:09 by aitor             #+#    #+#             */
/*   Updated: 2025/10/06 19:08:59 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cuenta cuántos caracteres tiene una cadena y devuelves ese número.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	cont;

	cont = 0;
	while (s[cont])
	{
		cont++;
	}
	return (cont);
}

// int	main(void)
// {
// 	printf("%ld", ft_strlen("hola"));
// 	return (0);
// }
