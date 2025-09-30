/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aitor <aitor@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:21:40 by aitor             #+#    #+#             */
/*   Updated: 2025/08/10 01:04:35 by aitor            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <unistd.h>

void	*ft_memset(void *b, int c, unsigned long len)
{
	unsigned long	n;
	char			*y;

	n = 0;
	y = (char *)b;
	while (n < len)
	{
		y[n] = c;
		n++;
	}
	return (b);
}

// int	main(void)
// {
// 	void	*m;
// 	int n;

// 	n = 0;
// 	m = ft_memset(m, 'b', 4);
// 	printf("%p\n", m);
// 	while (m != '\0')
// 	{
// 		write(1, &m[n], 1);
// 		n++;
// 	}
// 	return (0);
// }
