/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:18:26 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:30:23 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_ra(t_list **lst, t_list **commands)
{
	t_list	*tmp;

	tmp = ft_lstnew((*lst)->content);
	ft_lstadd_back(lst, tmp);
	ft_delete_head(lst);
	ft_lstadd(commands, "ra");
}
