/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:36:00 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/10 03:36:00 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;
	size_t	total_size;

	if (nmemb == 0 || size == 0)
		return (NULL);
	total_size = nmemb * size;
	ptr = malloc(total_size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, total_size);
	return (ptr);
}

// int main(void)
// {
//     int *arr;
//     size_t i;

//     arr = ft_calloc(5, sizeof(int));
//     if (arr == NULL)
//         return (1);
//     for (i = 0; i < 5; i++)
//         printf("%d ", arr[i]);
//     printf("\n");
//     free(arr);
//     return (0);
// }