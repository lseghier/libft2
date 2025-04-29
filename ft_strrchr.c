/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:40:29 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/29 00:40:29 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strrchr(const char *s, int c)
{
    int    i;
    char    *last_occurrence;

    i = 0;
    last_occurrence = NULL;
    while (s[i])
    {
        if (s[i] == (char)c)
            last_occurrence = (char *)&s[i];
        i++;
    }
    if (c == '\0')
        return ((char *)&s[i]);
    return (last_occurrence);
}