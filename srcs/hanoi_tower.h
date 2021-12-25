/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi_tower.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:13:53 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/25 23:45:39 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HANOI_TOWER_H
# define HANOI_TOWER_H

# include "libft.h"
# include "str_edit.h"
# include "hanoi.h"
# include <stdlib.h>

# ifndef T_TOWER
#  define T_TOWER

typedef struct s_tower
{
	int	size;
	int	*old;
	int	*new;
	int	*tmp;
}	t_tower;

# endif

# ifndef T_HANOI
#  define T_HANOI

typedef struct t_hanoi
{
	int	*d;
	int	*a;
	int	*i;
}	t_hanoi;

# endif

void	init(t_tower *tower, int size);
void	print_tower(t_tower *tower);
void	print_tower_part_2(char *str, t_tower *tower, int str_size);

#endif
