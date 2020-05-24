/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 19:32:52 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:47:53 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *m, const char *a)
{
	int i;
	int j;

	i = -1;
	if (ft_strlen(a) == 0)
		return ((char *)m);
	while (m[++i])
	{
		j = 0;
		while (a[j] == m[i + j] && m[i + j])
			j++;
		if (a[j] == '\0')
			return (((char *)m) + i);
	}
	return (0);
}
