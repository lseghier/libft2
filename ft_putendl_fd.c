/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: laseghie <laseghie@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/15 06:36:04 by laseghie          #+#    #+#             */
/*   Updated: 2025/04/15 06:36:04 by laseghie         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putendl_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
		write(fd, &s[i++], 1);
	write(fd, "\n", 1);
}

// int main(void)
// {
//     // Test avec une chaîne normale
//     ft_putendl_fd("Hello, world!", 1);
//     // Test avec une chaîne vide
//     ft_putendl_fd("", 1);	
//     // Test avec des caractères spéciaux
//     ft_putendl_fd("Test\tdescaractères\rspéciaux!", 1);
//     // Test avec stdout (fd = 1)
//     ft_putendl_fd("Ceci est envoyé à stdout (fd = 1)", 1);
//     // Test avec stderr (fd = 2)
//     ft_putendl_fd("Ceci est envoyé à stderr (fd = 2)", 2);
//     return (0);
// }