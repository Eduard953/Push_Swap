/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:16:08 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:33:10 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

void	ft_pa(t_list **src, t_list **dst, t_list **commands)
{
	t_list	*tmp;

	if (*src)
	{
		tmp = ft_lstnew((*src)->content);
		ft_lstadd_front(dst, tmp);
		ft_delete_head(src);
		ft_lstadd(commands, "pa");
	}
}
