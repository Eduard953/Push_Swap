/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   check_input.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:06:08 by ebeiline          #+#    #+#             */
/*   Updated: 2022/01/12 17:51:10 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static void	check_int(int argc, char **argv)
{
	int		i;

	if (argc < 3)
		exit (-1);
	i = 1;
	while (i < argc)
	{	
		if (!(ft_atoi(argv[i])) && argv[i][0] != '0')
		{
			write(1, "Error\n", 7);
			exit (-1);
		}
		if (ft_atol(argv[i]) > 2147483647 || ft_atol(argv[i]) < -2147483648)
		{
			write(1, "Error\n", 7);
			exit (-1);
		}
		i++;
	}
}

static void	check_num(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc)
	{
		j = 0;
		while (argv[i][j] != '\0')
		{
			if (!(ft_isdigit(argv[i][j])))
			{
				if ((argv[i][j]) == '-' || (argv[i][j]) == '+')
					j++;
				else
				{
					write(1, "Error\n", 7);
					exit (-1);
				}
			}
			j++;
		}
		i++;
	}
}

static void	check_dup(int argc, char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (i < argc - 1)
	{
		j = i + 1;
		while (j < argc)
		{
			if (ft_atoi(argv[i]) == ft_atoi(argv[j]))
			{
				write(1, "Error\n", 7);
				exit (-1);
			}
			j++;
		}
		i++;
	}
}

static void	check_sorted(int argc, char **argv)
{
	int	i;

	i = 1;
	while (i < argc - 1 && ft_atoi(argv[i]) < ft_atoi(argv[i + 1]))
		i++;
	if (i == argc - 1)
		exit (-1);
}

void	check_input(int argc, char **argv)
{
	check_num(argc, argv);
	check_int(argc, argv);
	check_dup(argc, argv);
	check_sorted(argc, argv);
}
