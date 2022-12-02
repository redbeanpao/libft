/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/02 13:45:26 by hleong            #+#    #+#             */
/*   Updated: 2022/12/02 15:46:48 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' || c <= 'Z')
		c += 32;
	return (c);
}

/* int	main (void)
{
	int	c;
	int	c1;

	c = 'A';
	c1 = 'A';
	printf("Int c before ft_tolower %c\n", c);
	printf("Int c after ft_tolower %c\n", ft_tolower(c));
	printf("Int c before tolower %c\n", c1);
	printf("Int c after tolower %c\n", tolower(c));
} */