/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jnuno-da <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 12:47:13 by jnuno-da          #+#    #+#             */
/*   Updated: 2024/10/16 21:22:39 by jnuno-da         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	ft_strcmp(char **argv, int i, int j)
{
	char	*t;
	int		c;

	c = 0;
	while (argv[i][c] == argv[j][c] && argv[i][c] != '\0' && argv[j][c] != '\0')
	{
		c++;
	}
	if ((argv[i][c] - argv[j][c]) > 0)
	{
		t = argv[i];
		argv[i] = argv[j];
		argv[j] = t;
	}
}

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		ft_putchar(str[i]);
		str++;
	}
}

int	main(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	if (argc != 0)
	{
		while (argv[i] != 0)
		{
			j = i + 1;
			while (argv[j] != 0)
			{
				ft_strcmp(argv, i, j);
				j++;
			}
			i++;
		}
		i = 0;
		while (++i < argc)
		{
			ft_putstr(argv[i]);
			ft_putchar('\n');
		}
	}
	else
		return (0);
}
