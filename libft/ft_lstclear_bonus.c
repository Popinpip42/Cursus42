/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear_bonus.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 13:31:25 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/19 14:03:49 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*current;
	//t_list	*next_node;

	if (!lst)
		return ;
	current = *lst;
	//next_node = current->next;
	//while (next_node != NULL)
	while (current != NULL)
	{
		/*del(current->content);
		free(current);
		
		next_node = next_node->next;
		current = next_node;*/
		ft_lstdelone(current, del);
	}
	del(current->content);
	free(current);
	lst = NULL;
}
