/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 19:16:17 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/09 16:28:59 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>
/* 
int	main(void)
{
	const char	*texto = "\200";
	char	texto2[] = "\0";
	char tex[] = "como estas";
	char	*men = memset(tex, 'r', 6);
	char	*fmen = ft_memset(tex, 'r', 6);
	char	*men = bzero(tex, 6);
	char	*fmen = (char *)ft_bzero(tex, 6);

	printf("valor ft_isalnum: %d\n", ft_isalnum('r'));
	printf("valor isalnum: %d\n", isalnum('r'));
	printf("valor ft_isalpha: %d\n", ft_isalpha('g'));
	printf("valor isalpha: %d\n", isalpha('g'));
	printf("valor isdigit: %d\n", ft_isdigit('1'));
	printf("valor isdigit: %d\n", isdigit('1'));
	printf("Caracter encontrado: %ld\n", (ft_strchr(texto, 'a') - texto));
	printf("Caracter encontrado: %ld\n", (strchr(texto, 'a') - texto));
	printf("valor isascii: %d\n", ft_isascii('128'));
	printf("valor isascii: %d\n", isascii('128'));
	printf("valor isprint: %d\n", ft_isprint(125));
	printf("valor isprint: %d\n", isprint(58258));
	printf("Caracter encontrado: %ld\n", (ft_strrchr(texto, 'a') - texto));
	printf("Caracter encontrado: %ld\n", (strrchr(texto, 'a') - texto));
	printf("valor strlen: %d\n", ft_strlen(texto));
	printf("valor strlen: %d\n", strlen(texto));
	printf("valor memset: %s\n", fmen);
	printf("valor memset: %s\n", men);
	printf("valor bzero: %s\n", fmen);
	printf("valor bzero: %s\n", men);
	ft_memcpy(texto2, tex, 3);
	texto2[5] = '\0';
	printf("Caracter encontrado ft_memcpy: %s\n", texto2);
	memcpy(texto2, tex, 3);
	texto2[5] = '\0';
	printf("Caracter encontrado memcpy: %s\n", texto2);
	 ft_memmove(texto2, tex, 3);
	 texto2[5] = '\0';
	 printf("Caracter encontrado ft_memmove: %s\n", texto2);
	 memmove(texto2, tex, 3);
	 texto2[5] = '\0';
	 printf("Caracter encontrado memmove: %s\n", texto2);
	printf("ft_strncmp %d\n", ft_strncmp(texto, texto2, 4));
	printf("strncmp %d\n", strncmp(texto, texto2, 4));
	return (0);
}  */

void	ft_print_result(char const *s)
{
	int		len;

	len = 0;
	while (s[len])
		len++;
	write(1, s, len);
	write(1, "\n", 1);
}

int		main(int argc, const char *argv[])
{
	char	str[] = "lorem ipsum dolor sit amet";
	char	*strsub;
	int		arg;

	alarm(5);
	if (argc == 1)
		return (0);
	else if ((arg = atoi(argv[1])) == 1)
	{
		if (!(strsub = ft_substr(str, 0, 10)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("A new string was not returned");
	}
	else if (arg == 2)
	{
		if (!(strsub = ft_substr(str, 7, 10)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 3)
	{
		if (!(strsub = ft_substr(str, 7, 0)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 4)
	{
		if (!(strsub = ft_substr(str, 0, 0)))
			ft_print_result("NULL");
		else
			ft_print_result(strsub);
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
	}
	else if (arg == 5)
	{
		char *bullshit;
		if (!(strsub = ft_substr(str, 400, 20)))
			ft_print_result("NULL");
		else
		{
			bullshit = (char *)&strsub[30];
			bullshit = "FULL BULLSHIT";
			if (strsub)
				ft_print_result(strsub);
			else
				ft_print_result("rip");
		}
		if (str == strsub)
			ft_print_result("\nA new string was not returned");
		(void)bullshit;
	}
	return (0);
}
