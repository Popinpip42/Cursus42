/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front_bonus.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 05:35:01 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/19 06:25:04 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

void	ft_lstadd_front(t_list **lst, t_list *new)
{
	new->next = *lst;
	*lst = new;
}
/*
int	main(void)
{
	t_list	*new_node;
	char	cade[] = "hola";
	new_node = ft_lstnew(cade);

	t_list	*new_node2;
	char	cade2[] = "q tall";
	new_node2 = ft_lstnew(cade2);

	t_list	*lista_larga = NULL;
	ft_lstadd_front(&lista_larga, new_node);
	ft_lstadd_front(&lista_larga, new_node2);
	
	t_list *current = lista_larga;
	while (current != NULL)
	{
		printf("%s\n", (char *)current->content);
		current = current->next;
	}
	free(lista_larga);
	//free(content,,,,,,)
}*/
