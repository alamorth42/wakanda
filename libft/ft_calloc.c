/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:42:53 by alamorth          #+#    #+#             */
/*   Updated: 2019/12/03 12:42:56 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	size_t	multp;

	multp = count * size;
	if (multp == 0)
		multp = 1;
	if (!(ptr = malloc(multp)))
		return (NULL);
	ft_bzero(ptr, multp);
	return (ptr);
}
