/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/25 10:29:40 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/25 15:17:58 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h>*/

char	*ft_strupcase(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			str[i] -= 32;
		i++;
	}
	return (str);
}
/*int main ()
{
	char test_string[] = "Hello, Word!";

	ft_strupcase(test_string);

	printf("%s\n", test_string);

	return (0);
}*/