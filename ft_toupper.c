/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:15:21 by hleong            #+#    #+#             */
/*   Updated: 2022/12/02 13:48:34 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' || c <= 'z')
	c -= 32;
	return (c);
}

/* int	main (void)
{
	int c;
	int c1;
	
	c = 'a';
	c1 = 'a';
	printf("Int c before ft_toupper %c\n", c);
	printf("Int c after ft_toupper %c\n", ft_toupper(c));
	printf("Int c1 before toupper %c\n", c1);
	printf("Int c after toupper %c\n", toupper(c));
	
} */