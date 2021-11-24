/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rrb.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:42:51 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/15 15:18:37 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rrb(t_list **lst, t_list **commands)
{
	t_list	*tmp;

	tmp = ft_lstlast(*lst);
	ft_delete_last(lst);
	ft_lstadd_front(lst, tmp);
	ft_lstadd(commands, "rrb");
}
