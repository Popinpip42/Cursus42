/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstlast_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 06:42:20 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/20 05:06:46 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

t_list	*ft_lstlast(t_list *lst)
{
	if (!lst)
		return (NULL);
	while (lst->next != NULL)
	{
		lst = lst->next;
	}
	return (lst);
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

	t_list *last_elem = ft_lstlast(lista_larga);
	//printf("%s\n", last_elem->content);

	free(lista_larga);
	//free(content,,,,,,)
}
*/
