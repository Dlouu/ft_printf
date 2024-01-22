/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbaumgar <mbaumgar@student.42mulhouse.fr>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 14:05:48 by mbaumgar          #+#    #+#             */
/*   Updated: 2023/11/17 12:47:40 by mbaumgar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str;
	size_t	len;

	if (!s1)
		return (NULL);
	if (!set)
		return (ft_strdup(s1));
	while (ft_strchr(set, *s1) && *s1)
		s1++;
	len = ft_strlen(s1);
	while (ft_strrchr(set, s1[len]) && len > 0)
		len--;
	str = ft_substr(s1, 0, len + 1);
	if (!str)
		return (NULL);
	return (str);
}
