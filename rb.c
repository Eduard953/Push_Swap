/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:44:04 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:31:09 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_rb(t_list **lst, t_list **commands)
{
	t_list	*tmp;

	tmp = ft_lstnew((*lst)->content);
	ft_lstadd_back(lst, tmp);
	ft_delete_head(lst);
	ft_lstadd(commands, "rb");
}
