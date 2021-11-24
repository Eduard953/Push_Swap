/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:42:06 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/15 15:18:11 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_pb(t_list **src, t_list **dst, t_list **commands)
{
	t_list	*tmp;

	if (*src)
	{
		tmp = ft_lstnew((*src)->content);
		ft_lstadd_front(dst, tmp);
		ft_delete_head(src);
		ft_lstadd(commands, "pb");
	}
}
