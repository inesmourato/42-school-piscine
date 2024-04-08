/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 11:44:42 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/05 11:27:50 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

int	ft_str_is_alpha(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0' )
	{
		if (!(str[i] >= 'a' && str[i] <= 'z' ))
		{
			if (!(str[i] >= 'A' && str[i] <= 'Z' ))
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "kdsjhkAf";

	printf("%d", ft_str_is_alpha(str));
}*/