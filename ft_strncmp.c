/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 16:32:01 by hleong            #+#    #+#             */
/*   Updated: 2022/12/08 16:32:28 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	char	*str1;
	char	*str2;

	i = 0;
	str1 = (char *)s1;
	str2 = (char *)s2;
	while (str1 != 0 && str2 != 0 && i < n)
	{
		if (str1[i] != str2[i])
			return (str1[i] - str2[i]);
		i++;
	}
	return (0);
}

/* int	main (void)
{
	const char	*s1 = "Hello!";
	const char	*s2 = "Hello!!";
	const char	*ft_s1 = "Hello!";
	const char	*ft_s2 = "Hello!!";
	size_t		n = 7;
	printf("s1-s2= %d\n", strncmp(s1, s2, n));
	printf("s2-s1= %d\n", strncmp(s2, s1, n));
	printf("ft_s1-ft_s2= %d\n", ft_strncmp(ft_s1, ft_s2, n));
	printf("ft_s2-ft_s1= %d\n", ft_strncmp(ft_s2, ft_s1, n));
} */