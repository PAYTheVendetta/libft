/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 20:34:24 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/08 12:02:47 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Te dice si es un dígito o un carácter, si no te devuelve cero.

int	ft_isalnum(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isalnum(' '));
// 	return (0);
// }
