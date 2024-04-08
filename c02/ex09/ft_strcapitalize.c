/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/01 15:00:44 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/03 16:51:19 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

char	*ft_strcapitalize(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
		{
			str[i] = str[i] + 32; 
		}
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (!(str[i -1] >= '0' && str[i -1] <= '9'))
			{
				if (!(str[i -1] >= 'A' && str[i -1] <= 'Z'))
				{
					if (!(str[i -1] >= 'a' && str[i -1] <= 'z'))
					{
						str[i] = str[i] - 32;
					}
				}
			}
		}
		i++;
	}
	return (str);
}

/*#include <stdio.h>
int	main(void)
{
	char	str[] = "ola, tudo bem? 42palavras quarenta-e-duas; cinquenta+e+um";	

	printf("%s", ft_strcapitalize(str));
	
}*/