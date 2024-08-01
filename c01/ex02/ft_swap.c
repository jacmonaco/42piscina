/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/21 10:40:07 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/22 14:58:50 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_swap(int *a, int *b)
{
	int	temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

/*int	main(void)
{
	int num1 = 17;
	int num2 = 20;

	printf("%d, %d\n", num1, num2);	
	ft_swap(&num1, &num2);
	printf("%d, %d\n", num1, num2);
	return 0;
}*/