/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 02:06:17 by marvin            #+#    #+#             */
/*   Updated: 2025/04/04 02:06:17 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stddef.h>

void	*ft_memset(void *b, int c, size_t len)
{
	unsigned char	*p;
	size_t			i;

	p = (unsigned char *)b;
	i = 0;
	while (len-- > 0)
		p[i++] = (unsigned char)c;
	return (b);
}

// int main()
// {
//     char str[50] = "Hello World!";
//     printf("Before memset: %s\n", str);

//     // Utilisation de ft_memset
//     ft_memset(str, 'i', 49);

//     printf("After memset: %s\n", str);
//     return (0);
// }
