/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 19:45:21 by hleong            #+#    #+#             */
/*   Updated: 2022/12/08 21:19:36 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	char	*h;
	char	*n;
	size_t	i;
	size_t	j;

	i = 0;
	h = (char *)haystack;
	n = (char *)needle;
	if (n[i] == 0)
		return (h);
	while (i < len)
	{
		j = 0;
		while (h[i + j] == n[j])
		{
			if (n[j + 1] == 0)
				return (&h[i]);
			++j;
		}
		++i;
	}
	return (0);
}

/* int	main (void)
{
	printf("1. strnstr if needle is an empty string: %s\n", 
		strnstr("Hello World", "", 10));
	printf("2. ft_strnstr if needle is an empty string: %s\n", 
		ft_strnstr("Hello World", "", 10));
	printf("3. strnstr if needle occurs nowhere in haystack: %s\n", 
		strnstr("Hello World", "Zh", 10));
	printf("4. ft_strnstr if needle occurs nowhere in haystack: %s\n", 
		ft_strnstr("Hello World", "Zh", 10));
	printf("5. strnstr if needle occurs in haystack %s\n", 
		strnstr("Hello World", " W", 10));
	printf("6. ft_strnstr if needle occurs in haystack %s\n", 
		ft_strnstr("Hello World", " W", 10));
} */