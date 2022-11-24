/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hleong <hleong@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 01:22:33 by hleong            #+#    #+#             */
/*   Updated: 2022/11/24 16:15:42 by hleong           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void ft_bzero(void *s, size_t n)
{
    int i;
    char *h;

    h = (char *)s;
    i = 0;
    while (i < n)
    {
       h[i] = 0;
       i++; 
    }
}

/* int main (void)
{
    char *x;

    x = "hello world!";

    char *a;

    a = strdup(x);
    ft_bzero(a,5);
    a[12] = 'a';
    int i = 0;
    while (i < 20)
    {
    printf("%c", a[i++]);
    }
    free (a);
} */