/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 18:45:01 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:45:34 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	char			*d;
	const	char	*s;

	if (!src && !dest)
		return (0);
	i = -1;
	d = dest;
	s = src;
	while (++i < n)
		d[i] = s[i];
	return (dest);
}
