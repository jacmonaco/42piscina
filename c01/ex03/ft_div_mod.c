/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 09:18:46 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/22 14:58:53 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int main()
{
	int a = 25;
	int b = 3;
	int div, mod; 

	ft_div_mod(a, b, &div, &mod);

	printf("Divsão de %d por %d = %d\n", a, b, div);
	printf("Resto da divisão %d por %d = %d\n", a, b, mod);

	return 0;
}*/