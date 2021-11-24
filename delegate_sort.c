/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   delegate_sort.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/16 13:55:18 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:31:26 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"
#include <stdio.h>

void	ft_delegate(t_list **a, t_list **b, t_list **commands, int size)
{
	if (size == 2)
		ft_sa(a, commands);
	else if (size == 3)
		sort_3(a, commands);
	else if (size == 4)
		sort_4(a, b, commands);
	else if (size == 5)
		sort_5(a, b, commands);
	if (size > 5)
		ft_radix(a, b, commands, (size - 1));
}
