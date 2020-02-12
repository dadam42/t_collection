/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_stack.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 19:07:51 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/12 19:21:43 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_STACK_H
# define T_STACK_H
# include "t_collection.h"
# include "libft.h"

typedef struct	s_fifo
{
	t_collection	collection;
	t_list			*content;
}				t_fifo;
#endif
