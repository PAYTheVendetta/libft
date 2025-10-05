/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/10 19:14:04 by aitor             #+#    #+#             */
/*   Updated: 2025/08/10 19:45:00 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize)
{
	unsigned long	n;

	n = 0;
	while (src[n])
	{
		if (dstsize != 0)
		{
			if (dstsize > n)
				dst[n] = src[n];
			else if (dst[n - 1] != '\0')
				dst[n - 1] = '\0';
		}
		n++;
	}
	if (dstsize != 0)
		if (dst[n - 1] != '\0')
			dst[n - 1] = '\0';
	return (n);
}
