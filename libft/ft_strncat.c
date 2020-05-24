/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/10 18:24:36 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:47:25 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *dest, const char *src, size_t n)
{
	size_t i;
	size_t j;

	i = -1;
	j = -1;
	while (dest[++i] != '\0')
		;
	while (src[++j] != '\0' && j < n)
		dest[j + i] = src[j];
	dest[j + i] = '\0';
	return (dest);
}
