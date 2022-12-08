/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:37:31 by hleong            #+#    #+#             */
/*   Updated: 2022/12/08 19:22:52 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (i < n)
	{
		if (str1[i] == str2[i])
			i++;
		else
			return (1);
	}
	return (0);
}

/* int	main (void)
{
	printf("Memcmp test %d\n", memcmp("Hello", "Hell", 2));
	printf("ft_memcmp test %d\n", ft_memcmp("Hello", "Hell", 2));
} */