/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pushswap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ebeiline <ebeiline@42wolfsburg.de>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/13 14:22:33 by ebeiline          #+#    #+#             */
/*   Updated: 2022/02/17 16:25:40 by ebeiline         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

int	main(int argc, char **argv)
{
	int		i;
	int		*norm;
	t_list	*a;
	t_list	*b;
	t_list	*commands;

	i = 0;
	check_input(argc, argv);
	norm = ft_normalize(argv, argc);
	a = NULL;
	b = NULL;
	commands = NULL;
	while (i < (argc - 1))
	{
		ft_lstadd(&a, ft_itoa(norm[i]));
		i++;
	}
	ft_delegate(&a, &b, &commands, i);
	ft_lstclear(&a, free);
	ft_lstclear(&b, free);
	free(norm);
	ft_lstprint(commands);
	free_lst(commands);
	return (0);
}
