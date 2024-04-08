/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 14:49:22 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/12 17:11:01 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		size;
        int     *dest;
        
        
	if (min >= max)
	{
		range = NULL;
                return (0);
        }
	i = 0;
	size = max - min;
	dest = (int *)malloc(size * sizeof(int));
        range = &dest;
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	return (size);
}

int main(void)
{
	int min = 0;
	int max = 4;
       
	int **dest;
        int range = ;

	dest = ft_ultimate_range(range, min, max);
	printf("%d", dest[0]);
}