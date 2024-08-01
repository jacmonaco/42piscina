/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 15:10:18 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/23 09:33:50 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
}

/*int	main(void)
{
	ft_putstr("Jacque");
	return (0);
}*/