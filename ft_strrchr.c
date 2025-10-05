/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/29 19:48:27 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/02 16:44:57 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Busca en una cadena el último carácter que encuentre
//y devuelve la posición de ese carácter; si no, devuelve cero.

const char	*ft_strrchr(const char *s, int c)
{
	int	n;
	int	i;

	n = 0;
	while (s[n])
	{
		if (s[n] == c)
			i = n;
		n++;
	}
	if (!(s[n]) && i != 0)
		return (&s[i]);
	if (c == '\0')
	{
		i = n;
		return (&s[i + 1]);
	}
	return (0);
}
