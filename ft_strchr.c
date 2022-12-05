/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: huihui <huihui@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:58:52 by hleong            #+#    #+#             */
/*   Updated: 2022/12/05 22:08:25 by huihui           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	char	*str;

	str = (char *)s;
	while (*str != 0)
	{
		if (*str == c)
			return (str);
		str++;
	}
	if (c == 0)
		return (str);
	return (0);
}

/* int	main (void)
{
	const char	*str = "Hello, what's up";
	const char	*str1 = "Hello";
	const char	*ft_str = "Hello, what's up";
	const char	*ft_str1 = "Hello";
	int	c = ',';
	int c1 = ',';
	int ft_c = ',';
	int	ft_c1 = ',';
	printf("Str after strchr %s\n", strchr(str, c));
	printf("Str1 after strchr %s\n", strchr(str1, c1));
	printf("Ft_str after ft_strchr %s\n", ft_strchr(ft_str, ft_c));
	printf("Ft_str1 after ft_strchr %s\n", ft_strchr(ft_str1, ft_c1));
} */