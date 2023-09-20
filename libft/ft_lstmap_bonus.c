/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:33:03 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/20 06:19:44 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	**p_list = NULL;
	int		old_list_size;

	old_list_size = ft_lstsize(lst);
	*p_list = (t_list *)malloc(old_list_size * sizeof(t_list *));
	if (!(*p_list))
		return (NULL);
	//---
	while (lst != NULL)
	{
		*p_list = (*f)(lst->content);
		ft_lstdelone(lst, del);
		lst = lst->next;
	}
	free(lst);
	return (*p_list);
}
/*
int	main(void)
{
	t_list	*lst = ft_lstnew("hola");

	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("que tal")));
	
	printf("%d\n", ft_lstsize(lst));

	printf("%s\n", lst->content);
}
*/
