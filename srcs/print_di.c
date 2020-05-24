/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   print_di.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:49:23 by alamorth          #+#    #+#             */
/*   Updated: 2019/12/03 12:49:25 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/functions.h"

/*
** get_signed_type()
*/

static intmax_t	get_signed_type(t_options *option, va_list *args)
{
	intmax_t	nbr;

	if (option->l)
		nbr = va_arg(*args, long);
	else if (option->ll)
		nbr = va_arg(*args, long long);
	else if (option->h)
		nbr = (short)va_arg(*args, int);
	else if (option->hh)
		nbr = (char)va_arg(*args, int);
	else if (option->j)
		nbr = va_arg(*args, intmax_t);
	else if (option->z)
		nbr = va_arg(*args, ssize_t);
	else
		nbr = va_arg(*args, int);
	return (nbr);
}

/*
** ft_printf_integer()
*/

int				ft_print_integer(t_options *option, va_list *args)
{
	intmax_t	nbr;
	int			len;

	nbr = get_signed_type(option, args);
	len = ft_nbrlen(nbr, 10);
	if (nbr < 0)
		option->neg = 1;
	else if (nbr == 0 && option->point)
		len = 0;
	if (!(helper_nb_pad(option, len, 0, nbr)))
		return (0);
	if (!(nbr == 0 && option->point))
		if (!(add_nbr_to_output(option, nbr, "0123456789")))
			return (0);
	if (!(helper_nb_pad(option, len, 1, nbr)))
		return (0);
	return (1);
}
