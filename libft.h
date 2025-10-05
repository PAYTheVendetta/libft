/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aialonso <aialonso@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/30 18:52:03 by aialonso          #+#    #+#             */
/*   Updated: 2025/10/01 17:10:26 by aialonso         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int				ft_isalpha(int c);
int				ft_isalnum(int c);
int				ft_isascii(int c);
int				ft_isdigit(int c);
int				ft_isprint(int c);
int				ft_tolower(int c);
void			ft_bzero(void *s, unsigned long n);
void			*ft_memcpy(void *dst, const void *src, unsigned long n);
void			*ft_memmove(void *dst, const void *src, unsigned long len);
void			*ft_memset(void *b, int c, unsigned long len);
char			*ft_strchr(const char *s, int c);
unsigned long	ft_strlcat(char *dst, const char *src, unsigned long dstsize);
unsigned long	ft_strlcpy(char *dst, const char *src, unsigned long dstsize);
unsigned long	ft_strlen(const char *s);
char			*ft_strrchr(const char *s, int c);