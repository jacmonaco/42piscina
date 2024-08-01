/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jacsouza <jacsouza@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/24 16:18:36 by jacsouza          #+#    #+#             */
/*   Updated: 2024/07/24 17:52:10 by jacsouza         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_str_is_numeric(char *str)
{
	int	i;

	i = 0;
	if (str[i] == '\0')
		return (1);
	while (str[i] != '\0')
	{
		if ((str[i] <= '9') && (str[i] >= '0'))
			i++;
		else
			return (0);
	}
	return (1);
}

/*int main()
{
    char test_string[] = "24102022";

    if (ft_str_is_numeric(test_string))
        printf("1\n");
    else
        printf("0\n");

    return 0;
}*/