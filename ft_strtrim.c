/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/11 18:33:44 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/11 18:33:44 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	ft_is_in_set(unsigned char c, const char *set)
{
	size_t	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	const char	*start;
	const char	*end;
	char		*trimmed_str;
	size_t		len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	start = s1;
	end = s1 + ft_strlen(s1) - 1;
	while (*start && ft_is_in_set(*start, set))
		start++;
	while (end > start && ft_is_in_set(*end, set))
		end--;
	len = end - start + 1;
	trimmed_str = (char *)malloc(sizeof(char) * (len + 1));
	if (!trimmed_str)
		return (NULL);
	ft_memcpy(trimmed_str, start, len);
	trimmed_str[len] = '\0';
	return (trimmed_str);
}
