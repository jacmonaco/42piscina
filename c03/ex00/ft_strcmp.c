/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 15:21:17 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/28 15:27:19 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 == *s2 && *s1)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

/*#include <stdio.h>

int	main()
{

		char s1[] = "tubaina";
		char s2[] = "tubarao";

	printf("%d\n", ft_strcmp(s1, s2));
	return (0);
}*/
