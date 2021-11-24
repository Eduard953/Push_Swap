/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   radix.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/15 17:08:13 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:32:36 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	bitlength(int num)
{
	int	bits;

	bits = 0;
	while ((num >> bits) != 0)
		bits++;
	return (bits);
}

void	ft_radix(t_list **a, t_list **b, t_list **commands, int size)
{
	int	max_bits;
	int	i;
	int	cur;
	int	j;

	max_bits = bitlength(size);
	i = 0;
	while (max_bits != 0)
	{
		j = 0;
		while (j <= size)
		{
			cur = ft_atoi((*a)->content);
			if (((cur >> i) & 1) == 1)
				ft_ra(a, commands);
			else
				ft_pb(a, b, commands);
			j++;
		}
		i++;
		while (*b)
			ft_pa(b, a, commands);
		max_bits--;
	}
}
