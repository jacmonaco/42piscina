/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:10:02 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/25 11:26:20 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_printable(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] < 32) || (str[i] > 126))
			return (0);
		i++;
	}
	return (1);
}

/*int	main()
{
	char test_string[] = "";

	if (ft_str_is_printable(test_string))
		printf("1\n");
	else
		printf("0\n");

	return (0);
}*/