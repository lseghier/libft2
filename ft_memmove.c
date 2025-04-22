/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/05 04:00:32 by marvin            #+#    #+#             */
/*   Updated: 2025/04/05 04:00:32 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stddef.h>
#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	d = (unsigned char *)dest;
	s = (const unsigned char *)src;
	if (d == s || n == 0)
		return (dest);
	if (d < s)
		while (n--)
			*d++ = *s++;
	else
	{
		d += n;
		s += n;
		while (n--)
			*--d = *--s;
	}
	return (dest);
}

// void	*ft_memmove(void *dest, const void *src, size_t n)
// {
// 	unsigned char		*d;
// 	const unsigned char	*s;
// 	size_t				i;

// 	d = (unsigned char *)dest;
// 	s = (const unsigned char *)src;
// 	i = 0;
// 	if (d == s || n == 0)
// 		return (dest);
// 	if (d < s)
// 	{
// 		while (i < n)
// 		{
// 			d[i] = s[i];
// 			i++;
// 		}
// 	}
// 	else
// 	{
// 		i = n;
// 		while (i > 0)
// 		{
// 			d[i - 1] = s[i - 1];
// 			i--;
// 		}
// 	}
// 	return (dest);
// }

// int main(void)
// {
//     char dest[50] = "Hello, World!";
//     const char src[] = "Goodbye, World!";

//     printf("Before memmove: %s\n", dest);
//     ft_memmove(dest, src, 7);
//     printf("After memmove: %s\n", dest);

//     return 0;
// }