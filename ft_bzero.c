/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 13:51:53 by aitor             #+#    #+#             */
/*   Updated: 2025/10/02 18:27:26 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Se encarga de rellenar un array con ceros.

void	ft_bzero(void *s, unsigned long n)
{
	unsigned long	i;
	char			*y;

	i = 0;
	y = (char *)s;
	while (i < n)
	{
		y[i] = '\0';
		i++;
	}
}
