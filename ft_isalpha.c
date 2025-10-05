/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/07 16:41:46 by aitor             #+#    #+#             */
/*   Updated: 2025/10/02 16:34:07 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Te dice si es un carácter, si no, te devuelve cero.

int	ft_isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	return (0);
}

// int	main(void)
// {
// 	printf("%d", ft_isalpha('6'));
// 	return (0);
// }
