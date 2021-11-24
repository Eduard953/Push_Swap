/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   normalize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:46:50 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/15 17:07:01 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	*sort_array(int *arr, long size)
{
	int		tmp;
	long	i;
	int		swap;

	swap = 1;
	while (swap == 1)
	{
		swap = 0;
		i = 0;
		while (i < size - 1)
		{
			if (arr[i] > arr[i + 1])
			{
				tmp = arr[i];
				arr[i] = arr[i + 1];
				arr[i + 1] = tmp;
				swap = 1;
			}
			i++;
		}
	}
	return (arr);
}

int	*ft_index(int *norm, int *check, int size)
{
	long	j;
	long	i;

	j = 0;
	while (j < size)
	{
		i = 0;
		while (i < size)
		{
			if (norm[j] == check[i])
			{
				norm[j] = i;
				break ;
			}
			i++;
		}
		j++;
	}
	return (norm);
}

int	*ft_normalize(char **arr, int size)
{
	int		*norm;
	int		*check;
	int		i;

	i = 0;
	norm = (int *)malloc(sizeof(int) * (size - 1));
	check = (int *)malloc(sizeof(int) * (size - 1));
	if (!norm || !check)
		exit(-1);
	while (i < (size - 1))
	{
		norm[i] = ft_atoi(arr[i + 1]);
		check[i] = ft_atoi(arr[i + 1]);
		i++;
	}
	check = sort_array(check, i);
	norm = ft_index(norm, check, (size - 1));
	free(check);
	return (norm);
}
