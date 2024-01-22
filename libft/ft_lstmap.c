/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap_bonus.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 14:47:51 by mbaumgar          #+#    #+#             */
/*   Updated: 2023/11/16 14:31:36 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new;
	t_list	*temp;
	void	*f_temp;

	if (!lst || !f || !del)
		return (NULL);
	new = NULL;
	while (lst)
	{
		f_temp = (*f)(lst->content);
		temp = ft_lstnew(f_temp);
		if (!temp)
		{
			ft_lstclear(&new, (*del));
			del(f_temp);
			return (NULL);
		}
		ft_lstadd_back(&new, temp);
		lst = lst->next;
	}
	return (new);
}
