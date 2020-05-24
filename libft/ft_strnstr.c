/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 20:03:33 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:47:46 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *m, const char *a, size_t n)
{
	size_t i;
	size_t j;

	if (ft_strlen(a) == 0)
		return ((char *)m);
	i = -1;
	while (m[++i] && i < n)
	{
		j = 0;
		while (a[j] && a[j] == m[i + j] && (i + j) < n)
			j++;
		if (a[j] == '\0')
			return (((char *)m) + i);
	}
	return (NULL);
}
