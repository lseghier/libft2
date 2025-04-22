/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/08 00:11:26 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/08 00:11:26 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*memchr(const void *s, int c, size_t n)
{
	const unsigned char		*p;
	size_t					i;

	p = (const unsigned char *)s;
	i = 0;
	if (n == 0)
		return (NULL);
	if (c == '\0')
		return ((void *)&p[n]);
	while (i < n)
	{
		if (p[i] == (unsigned char)c)
			return ((void *)&p[i]);
		i++;
	}
	return (NULL);
}

// int main(void)
// {
// 	char str[] = "Hello, World!";
// 	printf("Original: %s\n", str);
// 	printf("ft_memchr: %s\n", ft_memchr(str, 'W', 5));
// 	printf("memchr: %s\n", memchr(str, 'W', 5));
// 	return (0);
// }