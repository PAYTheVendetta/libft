/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 17:54:02 by aitor             #+#    #+#             */
/*   Updated: 2025/08/15 19:13:37 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	n;
	unsigned long	i;

	n = 0;
	i = 0;
	while (dst[n])
		n++;
	while (src[i])
	{
		if (dstsize != 0 && !(dstsize <= n))
		{
			if (dstsize > (n + i))
				dst[n + i] = src[i];
			else if (dst[dstsize - 1] != '\0')
				dst[dstsize - 1] = '\0';
		}
		i++;
	}
	if (dstsize != 0 && !(dstsize <= n))
		if (dst[dstsize - 1] != '\0')
			dst[dstsize - 1] = '\0';
	else if (dstsize <= n)
		return (dstsize + i);
	return (n + i);
}
