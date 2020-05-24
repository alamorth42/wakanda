/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_functions_pointers.h                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:39:01 by alamorth          #+#    #+#             */
/*   Updated: 2019/12/03 12:50:40 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_FUNCTIONS_POINTERS_H
# define T_FUNCTIONS_POINTERS_H
# include <string.h>
# include <stdarg.h>
# include "t_options.h"

typedef struct			s_func
{
	char	option;
	int		(*f)(t_options*, va_list*);
}						t_functions_pointers;

#endif
