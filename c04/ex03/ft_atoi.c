/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/05 14:13:06 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/07 18:02:12 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	paridade;
	int	numero;

	paridade = 0;
	numero = 0;
	while (*str >= 9 && *str <= 13 || *str == 32)
	{
		str++;
	}
	while (*str == '-' || *str == '+')
	{
		if (*str == '-' )
		{
			paridade++;
		}
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		numero = numero * 10 + *str -48;
		str++;
	}
	if (paridade % 2 != '0' )
		numero = -numero;
	return (numero);
}

#include <stdio.h>
int	main(void)
{
	char	c[] = " ---+--+1234ab567";
	
	printf("%d", ft_atoi(c));
}
