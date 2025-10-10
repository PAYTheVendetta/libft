/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/09 17:36:58 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/09 19:04:42 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	start;
	size_t	len;
	char	*cort;

	start = 0;
	if (!s1 || !set)
		return (NULL);
	len = ft_strlen(s1);
	while (s1[start] && ft_strchr(set, s1[start]))
		start++;
	start--;
	while (s1[len] && ft_strchr(set, s1[len]))
		len--;
	if (start >= len)
	{
		start = 0;
		len = 0;
	}
	cort = malloc((start - len + 1) * sizeof(char));
	if (!cort)
		return (NULL);
	ft_strlcpy(cort, &s1[start], (start - len + 1));
	return (cort);
}
