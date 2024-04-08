/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 12:48:10 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/01/29 15:19:40 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

/*int     main(void)
{
	int     a , b;
	int     divisao[1], resto[1];
	
	a = 15;
	b = 7;
	
	ft_div_mod(a, b, divisao, resto);
	divisao[0] = divisao[0] +48;
	resto[0] = resto[0] +48;
	

	write(1, divisao, 1);
	write(1, resto, 1);
}*/