/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:41:46 by hleong            #+#    #+#             */
/*   Updated: 2022/12/02 13:55:57 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	j;
	char	*d;
	char	*s;

	i = 0;
	j = 0;
	d = (char *)dst;
	s = (char *)src;
	while (d[i] != 0)
		i++;
	while (s[j] != 0 && (j < dstsize - i - 1))
	{
		d[i + j] = s[j];
		j++;
	}
	d[i + j] = 0;
	return (i + j);
}

/* int	main (void)
{
	char dst[50] = "Hello";
	const char src[50] = "World";
	char dst2[50] = "Hello";
	const char src2[50] = "World";
	char dst3[50] = "Hello";
	const char src3[50] = "World";
	printf("Dest before strlcat %s\n", dst);
	strlcat(dst, src, 10);
	printf("Dest after strlcat %s\n", dst);
	printf("Amnt copied after strlcat %zu\n", strlen(dst));
	printf("Dest before ft_strlcat %s\n", dst2);
	ft_strlcat(dst2, src2, 10);
	printf("Dest after ft_strlcat %s\n", dst2);
	printf("Amnt copied after ft_strlcat %zu\n", strlen(dst2));
	ft_strlcat(dst3, src3, 10);
	printf("Return Value %zu\n", ft_strlcat(dst3, src3, 10));
} */