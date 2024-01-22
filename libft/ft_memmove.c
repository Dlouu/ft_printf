/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/27 13:27:32 by mbaumgar          #+#    #+#             */
/*   Updated: 2023/11/17 17:49:40 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	if (dest < src)
		ft_memcpy(dest, src, n);
	else if (dest == src)
		return (dest);
	else
	{
		while (n--)
			((unsigned char *)dest)[n] \
			= ((unsigned const char *)src)[n];
	}
	return (dest);
}
