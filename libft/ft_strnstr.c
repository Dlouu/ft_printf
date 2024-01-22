/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 14:46:49 by mbaumgar          #+#    #+#             */
/*   Updated: 2023/11/09 16:55:25 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	j = 0;
	if (*little == 0)
		return ((char *)big);
	while (big[i] && i < len)
	{
		if (big[i] != little[j])
		{
			i = i - j;
			j = 0;
		}
		else
			j++;
		if (little[j] == '\0')
			return ((char *)big + i - j + 1);
		i++;
	}
	return (NULL);
}
