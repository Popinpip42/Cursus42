/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstsize_bonus.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/19 05:54:17 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/19 06:41:18 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

int	ft_lstsize(t_list *lst)
{
	int	counter;

	counter = 0;
	while (lst != NULL)
	{
		lst = lst->next;
		counter++;
	}
	return (counter);
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

	printf("%d\n", ft_lstsize(lista_larga));
}
*/
