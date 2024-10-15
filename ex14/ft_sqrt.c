/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:56:11 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/15 22:22:21 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	long	result;
	long	i;

	i = 1;
	result = 1;
	if (nb <= 0 || nb == 2)
		return (0);
	if (nb == 1)
		return (1);
	while (result <= nb)
	{
		i++;
		result = i * i;
	}
	return (i - 1);
}
/*#include <stdio.h>
int	main(void)
{
	printf("%d\n", ft_sqrt(2));
	printf("%d\n", ft_sqrt(-5));
	printf("%d\n", ft_sqrt(6 * 6));
	printf("%d\n", ft_sqrt(7 * 7));
	printf("%d\n", ft_sqrt(1));
	printf("%d\n", ft_sqrt(2058910729));
	printf("%d\n", ft_sqrt(46340 * 46340));
	printf("%d\n", ft_sqrt(2147483647));
}*/
