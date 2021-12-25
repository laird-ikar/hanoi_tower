/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/23 21:35:14 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/25 23:44:44 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hanoi.h"

void	hanoi(t_tower *tower, t_hanoi algo, int n)
{
	t_hanoi	n_algo;

	if (n > 0)
	{
		n_algo.d = algo.d;
		n_algo.a = algo.i;
		n_algo.i = algo.a;
		hanoi(tower, n_algo, n - 1);
		dep_disk(algo.d, algo.a, tower->size, tower);
		n_algo.d = algo.i;
		n_algo.a = algo.a;
		n_algo.i = algo.d;
		hanoi(tower, n_algo, n - 1);
	}
}

void	dep_disk(int *old_tab, int *new_tab, int size, t_tower *tower)
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
	print_tower(tower);
}
