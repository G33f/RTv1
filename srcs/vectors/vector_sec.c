/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_sec.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wpoudre <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/10 20:49:53 by wpoudre           #+#    #+#             */
/*   Updated: 2020/07/10 20:49:56 by wpoudre          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rtv1.h"

t_3_vec	new_vec_3(t_vector a, t_vector b, t_vector c)
{
	t_3_vec	t;

	t.p = a;
	t.n = b;
	t.v = c;
	return (t);
}
