/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.h                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 15:27:10 by ebeiline          #+#    #+#             */
/*   Updated: 2021/11/19 15:12:00 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSHSWAP_H
# define PUSHSWAP_H

# include "libft/libft.h"

void	ft_pa(t_list **src, t_list **dst, t_list **commands);
void	ft_pb(t_list **src, t_list **dst, t_list **commands);
void	ft_ra(t_list **lst, t_list **commands);
void	ft_rb(t_list **lst, t_list **commands);
void	ft_rra(t_list **lst, t_list **commands);
void	ft_rrb(t_list **lst, t_list **commands);
void	ft_sa(t_list **lst, t_list **commands);
void	ft_sb(t_list **lst, t_list **commands);
void	sort_3(t_list **a, t_list **commands);
void	sort_4(t_list **a, t_list **b, t_list **commands);
void	sort_5(t_list **a, t_list **b, t_list **commands);
void	sort_100(t_list **a, t_list **b, t_list **commands);
int		*ft_normalize(char **arr, int size);
int		is_sorted(t_list *lst);
void	check_input(int argc, char **argv);
void	ft_delegate(t_list **a, t_list **b, t_list **commands, int size);
void	ft_radix(t_list **a, t_list **b, t_list **commands, int size);

#endif