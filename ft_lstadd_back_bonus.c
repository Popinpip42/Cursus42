/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 02:26:47 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/20 06:18:46 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_back(t_list **lst, t_list *new)
{
	t_list	*current;

	if (*lst == NULL)
	{
		*lst = new;
		return ;
	}
	current = *lst;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = new;
}
/* while ((*lst)->next != NULL)
		*lst = (*lst)->next;
	(*lst)->next = new;*/
/*
int	main(void)
{
	t_list	*new_node;
	char	cade[] = "hola";
	new_node = ft_lstnew(cade);

	t_list	*new_node2;
	char	cade2[] = "q tall";
	new_node2 = ft_lstnew(cade2);

	t_list	*new_node3;
	char	cade3[] = "Pepon";
	new_node3 = ft_lstnew(cade3);
	
	t_list	*lista_larga = NULL;
	ft_lstadd_front(&lista_larga, new_node);
	ft_lstadd_front(&lista_larga, new_node2);
	ft_lstadd_back(&lista_larga, new_node3);
	
	t_list	*node = lista_larga;
	while (node != NULL)
	{
		printf("%s\n", (char *)node->content);
		node = node->next;
	}
}
*/
