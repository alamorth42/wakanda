/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/11 04:58:12 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:47:20 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int		i;
	char				*new_s;

	if (!s || !f)
		return (NULL);
	i = ft_strlen(s);
	if (!(new_s = malloc(sizeof(char) * (i + 1))))
		return (NULL);
	new_s[i] = '\0';
	i = -1;
	while (s[++i])
		new_s[i] = f(i, s[i]);
	return (new_s);
}
