/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: alamorth <alamorth@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/16 21:50:12 by fberger           #+#    #+#             */
/*   Updated: 2019/12/03 12:45:09 by alamorth         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*current;

	if (!(current = (t_list*)malloc(sizeof(t_list))))
		return (NULL);
	current->content = content;
	current->next = NULL;
	return (current);
}
