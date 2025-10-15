/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/08 18:10:28 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/11 14:01:00 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Se encarga de crear una copia de la cadena que recibe, pero teniendo en cuenta
//la longitud máxima que puede copiar y el punto del que va a empezar a copiar. 

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*copy;

	copy = NULL;
	if (s == NULL)
		return (NULL);
	if (ft_strlen(s) <= (size_t)start)
	{
		start = 0;
		len = 0;
	}
	if (len > ft_strlen(&s[(size_t)start]))
		len = ft_strlen(&s[(size_t)start]);
	len++;
	copy = malloc(len * sizeof(char));
	if (copy == NULL)
		return (NULL);
	ft_strlcpy(copy, &s[(size_t)start], len);
	return (copy);
}

/* int	main(void)
{
	char	*b;
char	str[] = "lorem ipsum dolor sit amet";
	if (!(ft_substr(str, 400, 20)))
		printf("NULL");
	b = ft_substr("lorem ipsum dolor sit amet", 400, 20);
	printf("%s\n", b);
} */
