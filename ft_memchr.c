/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:31:44 by hleong            #+#    #+#             */
/*   Updated: 2022/12/08 16:31:45 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t	i;
	char	*str;
	char	ch;

	i = 0;
	str = (char *)s;
	ch = (char)c;
	while (i < n)
	{
		if (*str == ch)
		{
			return (str);
		}
		i++;
		str++;
	}
	return (0);
}

/* int	main (void)
{
	printf("Test memchr %s\n", memchr("Hello", 'l', 3));
	printf("Test ft_memchr %s\n", ft_memchr("Hello", 'l', 3));
} */