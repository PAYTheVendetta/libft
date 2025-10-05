/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 19:34:06 by aitor             #+#    #+#             */
/*   Updated: 2025/10/02 17:08:52 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	*ft_memmove(void *dst, const void *src, unsigned long len)
{
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (len > i)
	{
		if (dst <= src)
		{
			d[i] = s[i];
			i++;
		}
		else
		{
			d[len - i - 1] = s[len - i - 1];
			i++;
		}
	}
	return (dst);
}
