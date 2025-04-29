/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/29 00:29:07 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/29 00:29:07 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
        size_t	i;
        size_t	j;
    
        j = 0;
        i = 0;
        if (size == 0)
            return (ft_strlen(src));
        if (size < ft_strlen(dst))
            return (ft_strlen(src) + size);
        i = ft_strlen(dst);
        while (src[j] && i + j + 1 < size)
        {
            dst[i + j] = src[j];
            j++;
        }
        dst[i + j] = '\0';
        return (i + ft_strlen(src));
}