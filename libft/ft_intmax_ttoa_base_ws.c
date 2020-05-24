/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_intmax_ttoa_base_ws.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:43:07 by alamorth          #+#    #+#             */
/*   Updated: 2019/12/03 12:43:10 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char			*ft_intmax_ttoa_base_ws(intmax_t nbr, char *base)
{
	int			size;
	char		*str;
	const int	baselen = ft_strlen(base);

	size = ft_nbrlen(nbr, baselen);
	if (!(str = (char*)malloc(sizeof(char) * (size + 1))))
		return (NULL);
	str[size--] = '\0';
	if (nbr == LLONG_MIN)
	{
		ft_strdel(&str);
		return (ft_strdup("9223372036854775808"));
	}
	if (nbr < 0)
		nbr *= -1;
	while (nbr && (str[size--] = base[nbr % baselen]))
		nbr = nbr / baselen;
	if (nbr == 0 && size == 0)
		str[size--] = '0';
	return (str);
}
