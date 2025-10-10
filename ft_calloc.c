/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 16:39:56 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/08 17:27:19 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Reserva memoria y la inicializa a cero. 

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*pre;

	pre = malloc(nmemb * size);
	if (pre == NULL)
		return (NULL);
	ft_bzero(pre, (nmemb * size));
	return (pre);
}
