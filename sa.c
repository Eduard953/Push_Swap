/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:20:13 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:14:47 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_sa(t_list **lst, t_list **commands)
{
	t_list	*tmp;

	if (*lst)
	{
		tmp = (*lst)->next;
		(*lst)->next = (*lst)->next->next;
		ft_lstadd_front(lst, tmp);
		ft_lstadd(commands, "sa");
	}
}
