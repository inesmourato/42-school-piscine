/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ibravo-m <ibravo-m@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/04 10:25:28 by ibravo-m          #+#    #+#             */
/*   Updated: 2024/02/04 10:49:16 by ibravo-m         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}

/*#include <stdio.h>
int	main(void)
{
	char	s1[] = "o0la tud0 bem";
	char	s2[] = "ola tudo bem";
	int	dif;

	dif = ft_strcmp(s1, s2);
	printf("%d", dif);
	
}*/