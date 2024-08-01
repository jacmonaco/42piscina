/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/28 17:57:59 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/29 11:42:06 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)

{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (dest);
}

/*#include <stdio.h>

int main()
{
	char	b[20]="deus";
	char	a[20]="socorro ";

	ft_strcat(a, b);

	printf("%s\n", a);

	return (0);
}*/