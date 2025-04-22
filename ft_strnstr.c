/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:13:45 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/10 03:13:45 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static unsigned int	ft_strlen(const char *s)
{
	unsigned int	i;

	i = 0;
	while (s[i])
		i++;
	return (i);
}

char	*ft_strnstr(const char *str, const char *to_find, size_t len)
{
	size_t	to_find_len;

	if (!str || !to_find)
	{
		if (len == 0)
			return ((char *)str);
	}
	if (to_find[0] == '\0')
		return ((char *)str);
	if (str[0] == '\0')
		return (NULL);
	to_find_len = ft_strlen(to_find);
	while (*str && to_find_len <= len--)
	{
		if (ft_memcmp(str, to_find, to_find_len) == 0)
			return ((char *)str);
		str++;
	}
	return (NULL);
}
