/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_options.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:39:13 by alamorth          #+#    #+#             */
/*   Updated: 2019/12/03 12:39:16 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_OPTIONS_H
# define T_OPTIONS_H
# include <string.h>

typedef struct						s_options
{
	char							type;
	char							*flags;
	int								fpos;
	int								flen;
	int								neg;
	int								left_justify;
	int								sign;
	int								space;
	int								hashtag;
	int								left_zeros;
	int								point;
	int								width;
	int								width_zero;
	int								precision;
	int								precision_zero;
	int								wildcard;
	int								h;
	int								hh;
	int								l;
	int								ll;
	int								j;
	int								z;
	int								sign_is_print;
	char							*output;
	int								writezero;
	int								ret;
	struct s_options				*next;
}									t_options;

#endif
