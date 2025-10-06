/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/21 15:43:49 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/06 20:24:39 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Busca en una cadena el primer
//carácter que encuentre 
//y devuelve la posición de ese carácter; si no, devuelve cero.

const char	*ft_strchr(const char *s, int c)
{
	int	n;

	n = 0;
	while (s[n])
	{
		if (s[n] == (unsigned char)c)
			return (&s[n]);
		n++;
	}
	if ((unsigned char)c == '\0')
		return (&s[n]);
	return (0);
}
