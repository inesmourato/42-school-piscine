/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 11:19:22 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/01/29 12:47:38 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

/*int	main(void)
{
	int	a[1];
	int	b[1];
	
	a[0] = '1';
	b[0] = '2';
	
	write(1, "a = ", 4);
	write(1, &a, 1);
	write(1, "\nb = ", 5);
	write(1, &b, 1);
	ft_swap(a, b);
	write(1, "\nnew a = ", 8);
	write (1, &a, 1);
	write(1, "\nnew b = ", 9);
	write (1, &b, 1);
}*/