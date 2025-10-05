/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/09 16:00:33 by aitor             #+#    #+#             */
/*   Updated: 2025/10/02 18:31:21 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//

void	*ft_memcpy(void *dst, const void *src, unsigned long n)
{
	unsigned long	i;
	char			*d;
	char			*s;

	i = 0;
	d = (char *)dst;
	s = (char *)src;
	while (n > i)
	{
		d[i] = s[i];
		i++;
	}
	return (dst);
}
