/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 19:16:15 by hleong            #+#    #+#             */
/*   Updated: 2022/11/28 21:24:35 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;
	char	*d;
	char	*s;

	s = (char *)src;
	d = (char *)dst;
	i = 0;
	while (i < n)
	{
		d[i] = s[i];
		i++;
	}
	d[i] = 0;
	return (d);
}

/* int main () 
{
   const char src[50] = "Hello";
   char dest[50] = "World";
   const char src2[50] = "Hello";
   char dest2[50] = "World";
   printf("Before memcpy dest = %s\n", dest);
   printf("Before ft_memcpy dest2 = %s\n", dest2);
   ft_memcpy(dest, src, strlen(src)+1);
   printf("After ft_memcpy dest = %s\n", dest);
   memcpy(dest2, src2, strlen(src2)+1);
   printf("After memcpy dest = %s\n", dest2);

   return(0);
} */