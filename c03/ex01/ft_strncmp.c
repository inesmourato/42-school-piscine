/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:44:21 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/08 14:41:32 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while ((s1[i] != '\0' || s2[i] != '\0') && (i < n))
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}

/*#include <string.h>
#include <stdio.h>
int	main(void)
{
	char	s1[] = "yu"; 
	char	s2[] = "yu";
	int	n;
	int	dif;

	n = 0;
	dif = ft_strncmp(s1, s2, n);
	printf("%d\n", dif);
	dif = strncmp(s1, s2, n);
	printf("%d\n", dif);
}*/