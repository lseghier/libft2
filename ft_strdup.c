/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:55:47 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/10 03:55:47 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char	*dup;
	size_t	i;

	dup = (char *)malloc(sizeof(char) * (ft_strlen(s1) + 1));
	if (!dup)
		return (NULL);
	i = 0;
	while (s1[i])
	{
		dup[i] = s1[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}

// int main(void)
// {
//     char str[] = "Hello, World!";
//     char *dup = ft_strdup(str);
//     printf("Original: %s\n", str);
//     printf("Duplicate: %s\n", dup);
//     free(dup);
//     return (0);
// }