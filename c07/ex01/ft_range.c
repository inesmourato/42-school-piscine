/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/12 13:41:47 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/12 14:21:23 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		size;
	int		*dest;

	if (min >= max)
	{
		return (0);
	}
	if (dest == NULL)
	{
		return (NULL);
	}
	i = 0;
	size = max - min;
	dest = (int *)malloc(size * sizeof(int) + 1);
	while (i < size)
	{
		dest[i] = min + i;
		i++;
	}
	return (dest);
}

// int main(void)
// {
// 	int min = 20;
// 	int max = 40;
// 	int *dest;

// 	dest = ft_range(min, max);
// 	printf("%d", dest[0]);
// }