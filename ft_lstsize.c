/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboualk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/18 14:53:52 by yaboualk          #+#    #+#             */
/*   Updated: 2026/10/18 16:20:48 by yaboualk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_lstsize(t_list *lst)
{
	t_list	*current;
	int		nodes_counter;

	if (!lst)
		return (0);
	nodes_counter = 0;
	current = lst;
	while (current)
	{
		current = current->next;
		nodes_counter++;
	}
	return (nodes_counter);
}
