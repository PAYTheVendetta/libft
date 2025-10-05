/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 18:21:40 by aitor             #+#    #+#             */
/*   Updated: 2025/10/02 18:01:34 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//Se encarga de rellenar un array con caracteres.

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
