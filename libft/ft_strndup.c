/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strndup.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/14 18:55:46 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:47:36 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strndup(const char *src, size_t n)
{
	char		*dup;
	size_t		i;

	if (!(dup = malloc(sizeof(char) * (ft_min(ft_strlen(src), n) + 1))))
		return (NULL);
	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dup[i] = src[i];
		i++;
	}
	dup[i] = '\0';
	return (dup);
}
