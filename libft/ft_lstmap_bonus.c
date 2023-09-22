/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:33:03 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/22 02:28:19 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux;
	char	*content;

	new_list = NULL;
	while (lst != NULL)
	{
		content = f(lst->content);
		aux = ft_lstnew(content);
		if (!aux)
		{
			del(content);
			ft_lstclear(&new_list, del);
			return (NULL);
		}
		ft_lstadd_back(&new_list, aux);
		lst = lst->next;
	}
	return (new_list);
}
/*	t_list	*beggining; //pointer to the initial list
	beggining = lst;
	ft_lstclear(&lst, free);
*/
/*
void	*to_upper(void *content)
{
	char	*word = (char *)content;
	char	*result = (char *)malloc((ft_strlen(word) + 1 ) * sizeof(char));
	if (!result)
		return (NULL);

	int	i = 0;
	while (*word != '\0')
	{
		result[i] = *word - 32;
		i++;
		word++;
	}
	result[i] = '\0';
	return (void *)result;
}

int	main(void)
{
	t_list *lst = ft_lstnew(ft_strdup("hola"));
	lst->next = ft_lstnew(ft_strdup("que"));
	lst->next->next = ft_lstnew(ft_strdup("tal"));

	t_list *new_lst = ft_lstmap(lst, to_upper, free);
	
	//-----------
	printf("Original List: ");
	t_list *current = lst;
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");
	
	printf("Modified List: ");
	current = new_lst;
	while (current)
	{
		printf("%s ", (char *)current->content);
		current = current->next;
	}
	printf("\n");

	// Clean up 
	ft_lstclear(&lst, free);
	ft_lstclear(&new_lst, free);

	system("leaks a.out");
	return 0;
}*/
