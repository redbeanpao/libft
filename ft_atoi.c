/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/12/08 21:21:27 by hleong            #+#    #+#             */
/*   Updated: 2022/12/09 16:12:53 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"


int		is_digit(char c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}

int		is_space(char c)
{
	if (c == ' ' || c == '\t' || c == '\n')
		return (1);
	if (c == '\f' || c == '\v')
		return (1);
	return (0);
}

int		ft_atoi(const char *str)
{
	int result;
	int sign;
	int i;

	result = 0;
	sign = 1;
	i = 0;
	while (is_space(str[i]))
		i++;
	if (str[i] == '-')
        sign = -1;
    if (str[i] == '-' || str[i] == '+')
        i++;
	while (is_digit(str[i]))
	{
		result = result + (str[i] - '0'); 
		if (is_digit(str[i + 1]))
			result = result * 10;
		i++;
	}
	return (result * sign);
}

/* int	main (void)
{
	printf("atoi string test %d\n", atoi("Hello what's up"));
	printf("ft_atoi string test %d\n", ft_atoi("Hello what's up"));
	printf("atoi number test %d\n", atoi("182838"));
	printf("ft_atoi number test %d\n", ft_atoi("182838"));
} */