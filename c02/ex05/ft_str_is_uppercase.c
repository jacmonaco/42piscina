/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 18:03:34 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/24 18:09:17 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

int	ft_str_is_uppercase(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] >= 'A') && (str[i] <= 'Z'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int	main()
{
	char test_string[] = "DUDA";

	if (ft_str_is_uppercase(test_string))
		printf("1\n");
	else
		printf("0\n");

	return (0);
}*/