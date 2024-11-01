/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 20:24:24 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/15 20:56:37 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	i;

	i = nb;
	if (nb < 0)
		return (0);
	if (nb == 0)
		return (1);
	while (--nb > 1)
	{
		i = i * nb;
	}
	return (i);
}
/*#include <stdio.h>
#include <stdlib.h>
int	main (int argc,char **argv)
{
	if (argc == 2)
		printf("%i",ft_iterative_factorial(atoi(argv[1])));
}*/
