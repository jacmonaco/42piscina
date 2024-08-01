/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/29 15:49:37 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/30 11:55:16 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}
/*#include <stdio.h>
int main()
{
	char str[] = "Hello, World";

	ft_strlen(str);
	printf("%d\n", ft_strlen(str));
	return (0);
}*/