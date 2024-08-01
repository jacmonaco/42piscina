/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 17:49:54 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/19 15:33:05 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
	{
		write(1, "N", 1);
	}
	else
	{
		write(1, "P", 1);
	}
}

/*int main(void)
{
	ft_is_negative(-3);
	ft_is_negative(0);
	ft_is_negative(7);

	return 0;
}*/
