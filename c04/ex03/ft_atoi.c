/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/31 11:48:47 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/31 17:07:13 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_atoi(char *str)
{
	int	aux;
	int	sign;

	aux = 0;
	sign = 1;
	while (*str == ' ' || *str == '\n' || *str == '\v' || \
	*str == '\t' || *str == '\f' || *str == '\r')
	{
		str++;
	}
	while (*str == '+' || *str == '-')
	{
		if (*str == '-')
		{
		sign *= -1;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		aux = aux * 10 + (*str - '0');
		str++;
	}
	return (aux * sign);
}
/*int	main(void)
{
	printf("ft_atoi(\"42\") = %d\n", ft_atoi("42"));
	printf("ft_atoi(\"-42\") = %d\n", ft_atoi("-42"));
	printf("ft_atoi(\"   -42\") = %d\n", ft_atoi("   -42"));
	printf("ft_atoi(\"4193 with words\") = %d\n", ft_atoi("4193 with words"));
	printf("ft_atoi(\"words and 987\") = %d\n", ft_atoi("words and 987"));
	printf("ft_atoi(\"-+28\") = %d\n", ft_atoi("-+28"));
	printf("ft_atoi(\"jacque\") = %d\n", ft_atoi("julia"));
	return (0);
}*/