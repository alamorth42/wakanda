/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/03 12:38:48 by alamorth          #+#    #+#             */
/*   Updated: 2019/12/03 12:38:54 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H
# include "../libft/libft.h"
# include "t_functions_pointers.h"

int			ft_printf(const char *f, ...);
int			extract_options(const char *f, t_options **opts, va_list *args);
int			init_option(const char *f, t_options *new, int i, va_list *args);
int			compute_flen(const char *formt, int i);
int			ft_print_char(t_options *opt, va_list *args);
int			ft_print_modulo(t_options *opt, va_list *args);
int			handle_single_percent(const char *f, int i);
int			ft_print_string(t_options *opt, va_list *args);
int			helper_str_pad(t_options *opt, int ln, int aftr);
int			ft_print_integer(t_options *opt, va_list *args);
int			ft_print_base(t_options *opt, va_list *args);
int			get_base(t_options *opt);
int			helper_nb_pad(t_options *opt, int l, int a, long long n);
int			ft_print_floats(t_options *opt, va_list *args);
int			add_nchar_ret(t_options *opt, char c, int n);
int			add_str_ret(t_options *opt, char *str);
int			add_nstr_ret(t_options *opt, char *str, int n);
int			add_nbr_to_output(t_options *option, intmax_t nbr, char *base);
int			add_unbr_to_output(t_options *option, uintmax_t nbr, char *base);
void		ft_print_output(t_options *option);
#endif
