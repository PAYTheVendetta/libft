/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:41:01 by aitor             #+#    #+#             */
/*   Updated: 2025/10/02 16:37:35 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Te dice si es un carácter printable; si no, te devuelve cero.

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isprint('6'));
// 	return (0);
// }
