/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/14 00:54:40 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/14 00:54:40 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdlib.h>
#include <stdio.h>

int	len(long n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		n *= -1;
		len++;
	}
	if (n == 0)
		return (1);
	while (n > 0)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*tab;
	long	nbr;
	int		i;

	nbr = n;
	i = len(nbr);
	tab = malloc(sizeof(char) * len(nbr) + 1);
	tab[i] = '\0';
	if (!tab)
		return (NULL);
	i--;
	if (nbr < 0)
	{
		tab[0] = '-';
		nbr *= -1;
	}
	if (nbr == 0)
		tab[0] = '0';
	while (nbr > 0)
	{
		tab[i] = (nbr % 10) + '0';
		nbr /= 10;
		i--;
	}
	return (tab);
}

// int main(void)
// {
//     int num = 0; // Example number
//     char *result = ft_itoa(num);
//     if (result)
//     {
//         printf("The string representation of %d is: %s\n", num, result);
//         free(result); // Don't forget to free the allocated memory
//     }
//     return 0;
// }