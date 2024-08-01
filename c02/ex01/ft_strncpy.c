/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/23 16:32:35 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/27 17:49:41 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*#include <unistd.h>
#include <stdio.h0>*/

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((i < n) && src[i] != '\0')
	{
	dest[i] = src[i];
	i++;
	}
	while (i < n)
	{
	dest[i] = '\0';
	i++;
	}
	return (dest);
}
/*int main()
{
	char	source[] = "Hello Word!";
	char	destination[20];

	ft_strncpy(destination, source, 5);

	printf("%s", destination);

	return (0);
}*/