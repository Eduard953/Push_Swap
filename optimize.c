/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   optimize.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/17 15:15:20 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:32:59 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	is_sorted(t_list *lst)
{
	int	i;
	int	j;

	i = 0;
	j = ft_lstsize(lst);
	while (lst->next)
	{
		if (ft_atoi(lst->content) < ft_atoi(lst->next->content))
			i++;
		lst = lst->next;
	}
	return ((i + 1) == j);
}
