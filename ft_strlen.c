/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:46:09 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/15 17:26:39 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Cuenta cuántos caracteres tiene una cadena y devuelves ese número.

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	count;

	count = 0;
	while (s[count])
		count++;
	return (count);
}

// int	main(void)
// {
// 	printf("%ld", ft_strlen("hola"));
// 	return (0);
// }
