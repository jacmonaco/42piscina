/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_numbers.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:51:53 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/19 15:33:02 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_numbers(void)
{
	char	digit;

	digit = '0';
	while (digit <= '9')
	{
		write(1, &digit, 1);
		digit++;
	}
}

/*int	main(void)
{
	ft_print_numbers();
	return (0);
}*/
