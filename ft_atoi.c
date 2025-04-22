/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/10 03:24:38 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/10 03:24:38 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include "libft.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_atoi(const char *str)
{
	int	i;
	int	sign;
	int	result;

	i = 0;
	sign = 1;
	result = 0;
	while (str[i] >= 9 && str[i] <= 13 || str[i] == 32)
		i++;
	if (str[i] == '-' || str[i] == '+')
	{
		if (str[i] == '-')
			sign = -1;
		i++;
	}
	while (str[i] >= 48 && str[i] <= 57)
	{
		result = str[i] - 48 + result * 10;
		i++;
	}
	return (result * sign);
}

// int main(void)
// {
//     char str[] = "   -12345abcde";
//     printf("Original: %s\n", str);
//     printf("ft_atoi: %d\n", ft_atoi(str));
//     printf("atoi: %d\n", atoi(str));
//     return (0);
// }