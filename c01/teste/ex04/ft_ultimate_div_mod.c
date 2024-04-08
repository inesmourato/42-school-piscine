/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 15:28:02 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/01/31 15:32:43 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	tmpa;
	int	tmpb;

	tmpa = *a;
	tmpb = *b;
	*a = tmpa / tmpb;
	*b = tmpa % tmpb;
}

/* int main(void)
{
	int *x;
	int *y;
	
	int a = 15;
	int b = 7;
	
	x = &a;
	y = &b;
	
	ft_ultimate_div_mod(x, y);
	
	x = x +48;
	y = y +48;
	write(1, &x, 1);
	write(1, &y, 1);
}*/
