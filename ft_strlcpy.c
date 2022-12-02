/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/28 20:38:12 by hleong            #+#    #+#             */
/*   Updated: 2022/11/28 21:57:29 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	char	*d;
	char	*s;

	d = (char *)dst;
	s = (char *)src;
	i = 0;
	while ((s[i] != 0) && (i < dstsize - 1))
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (i);
}

int	main (void)
{
	char dst[50] = "Hello";
	const char src[50] = "World";
	char dst2[50] = "Hello";
	const char src2[50] = "World";
	printf("Dest before strlcpy %s\n", dst);
	strlcpy(dst, src, 3);
	printf("Dest after strlcpy %s\n", dst);
	printf("Dest before ft_strlcpy %s\n", dst2);
	ft_strlcpy(dst2, src2, 3);
	printf("Dest after ft_strlcpy %s\n", dst2);
}