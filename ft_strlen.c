/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:46:09 by aitor             #+#    #+#             */
/*   Updated: 2025/08/08 14:52:19 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

unsigned long	ft_strlen(const char *s)
{
	int				n;
	unsigned long	cont;

	cont = 0;
	n = 0;
	while (s[n])
	{
		n++;
		cont++;
	}
	return (cont);
}

int	main(void)
{
	printf("%ld", ft_strlen("hola"));
	return (0);
}
