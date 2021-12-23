/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 21:35:14 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/23 21:55:53 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hanoi.h"

void	hanoi(t_tower *tower)
{
	t_tower	*tmp;

	tmp = malloc(sizeof(t_tower));
	if (tower->move > 0)
	{
		tmp->size = tower->size;
		tmp->move = tower->move - 1;
		tmp->old = tower->old;
		tmp->new = tower->tmp;
		tmp->tmp = tower->new;
		hanoi(tmp);
		dep_disk(tower->old, tower->new, tower->size);
		tmp->old = tower->tmp;
		tmp->new = tower->new;
		tmp->tmp = tower->old;
		hanoi(tmp);
	}
	print_tower(tower);
	free(tmp);
}

void	dep_disk(int *old_tab, int *new_tab, int size)
{
	int	max_old;
	int	max_new;

	max_old = 0;
	while (old_tab[max_old] == 0 && max_old < size - 1)
		max_old++;
	max_new = 0;
	while (new_tab[max_new + 1] == 0 && max_new < size - 1)
		max_new++;
	new_tab[max_new] = old_tab[max_old];
	old_tab[max_old] = 0;
}
