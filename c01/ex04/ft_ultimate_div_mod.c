/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 11:16:52 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/23 09:59:20 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*int main()
{
	int a = 17;
	int b = 3; 

	ft_ultimate_div_mod(&a, &b);

	printf("Divisão = %d\n", a);
	printf("Resto da divisão = %d\n", b);

	return 0;
}*/