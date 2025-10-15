/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:21:59 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/08 12:02:55 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Te dice si es un número; si no, te devuelve cero.

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isdigit('a'));
// 	return (0);
// }
