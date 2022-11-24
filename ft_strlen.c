/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:23:03 by hleong            #+#    #+#             */
/*   Updated: 2022/11/23 01:23:04 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlen(const char *s)
{
    size_t i;

    i = 0;
    while (s[i] != 0)
        i++;
    return (i);
}

/* int main (void)
{
    char *x;
    
    x = "Helloooo";
    printf("%zu", ft_strlen(x));
} */