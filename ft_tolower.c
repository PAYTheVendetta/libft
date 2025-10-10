/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/16 19:33:15 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/08 12:03:48 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Convierten los caracteres que están en mayúsculas en minúsculas.

int	ft_tolower(int c)
{
	if (c <= 90 && c >= 65)
		c += 32;
	return (c);
}

// int	main(void)
// {
// 	char	b;

// 	b = ft_tolower('Z');
// 	write(1, &b, 1);
// 	return (0);
// }
