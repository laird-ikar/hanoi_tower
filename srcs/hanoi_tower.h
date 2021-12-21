/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi_tower.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:13:53 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/21 15:23:42 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANOI_TOWER_H
# define HANOI_TOWER_H

# include "libft.h"

typedef struct s_tower
{
	int	size;
	int	*old;
	int	*new;
	int	*tmp;
}	t_tower;
#endif
