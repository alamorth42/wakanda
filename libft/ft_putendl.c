/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/13 19:42:10 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:46:06 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl(char const *s)
{
	int i;

	if (!s)
		return ;
	i = -1;
	while (s[++i])
		write(1, &s[i], 1);
	write(1, "\n", 1);
}
