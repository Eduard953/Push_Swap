/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_small.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 14:01:46 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:28:38 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	sort_3(t_list **a, t_list **commands)
{
	while (!is_sorted(*a))
	{
		if (ft_atoi((*a)->content) > ft_atoi((*a)->next->content))
			ft_sa(a, commands);
		else
			ft_rra(a, commands);
	}
}

void	sort_4(t_list **a, t_list **b, t_list **commands)
{
	while (ft_atoi((*a)->content) != 0)
	{
		if (ft_atoi((*a)->next->content) == 0)
			ft_ra(a, commands);
		else
			ft_rra(a, commands);
	}
	ft_pb(a, b, commands);
	sort_3(a, commands);
	ft_pa(b, a, commands);
}

void	sort_5(t_list **a, t_list **b, t_list **commands)
{
	while (ft_atoi((*a)->content) != 0)
	{
		if (ft_atoi((*a)->next->content) == 0)
			ft_ra(a, commands);
		else
			ft_rra(a, commands);
	}
	ft_pb(a, b, commands);
	while (ft_atoi((*a)->content) != 1)
	{
		if (ft_atoi((*a)->next->content) == 1)
			ft_ra(a, commands);
		else
			ft_rra(a, commands);
	}
	ft_pb(a, b, commands);
	sort_3(a, commands);
	ft_pa(b, a, commands);
	ft_pa(b, a, commands);
}
