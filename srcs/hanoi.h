/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 21:35:27 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/23 21:53:34 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANOI_H
# define HANOI_H

# include "libft.h"
# include "str_edit.h"
# include "hanoi_tower.h"

# ifndef T_TOWER
#  define T_TOWER

typedef struct s_tower
{
	int	size;
	int	move;
	int	*old;
	int	*new;
	int	*tmp;
}	t_tower;

# endif

void	hanoi(t_tower *tower);
void	dep_disk(int *old_tab, int *new_tab, int size);

#endif
