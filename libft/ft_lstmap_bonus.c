/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lsirpa-g <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/20 03:33:03 by lsirpa-g          #+#    #+#             */
/*   Updated: 2023/09/20 23:59:21 by lsirpa-g         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>
#include <stdio.h>

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_list;
	t_list	*aux;
	//t_list	*temp;
	//t_list	*beggining; //pointer to the initial list

	//beggining = lst;
	new_list = NULL;
	while (lst != NULL)
	{
		aux = ft_lstnew(f(lst->content));
		if (!aux)
		{
			ft_lstclear(&new_list, del);
			ft_lstclear(&lst, free);
			/*while (lst)
			{
				temp = lst->next;
				del(lst->content);
				free(lst);
				lst = temp;
			}*/
			return (NULL);
		}
		ft_lstadd_back(&new_list, aux);
		lst = lst->next;
	}
	//ft_lstclear(&beggining, del);
	return (new_list);
}
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
