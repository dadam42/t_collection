/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   t_collection.h                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: damouyal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/02/12 18:53:32 by damouyal          #+#    #+#             */
/*   Updated: 2020/02/12 19:21:43 by damouyal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef T_COLLECTION_H
# define T_COLLECTION_H

typedef struct s_collection	t_collection;
struct						s_collection
{
	void	*(*add)(t_collection *, void *);
	void	*(*contains)(t_collection *, void *);
	void	*(*remove)(t_collection *, void *);
};
#endif 
