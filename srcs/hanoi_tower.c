/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi_tower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:13:50 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/23 21:55:16 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "hanoi_tower.h"

int	main(int ac, char *av[])
{
	t_tower	*tower;

	tower = malloc(sizeof(t_tower));
	if (ac != 2)
	{
		ft_putstr("Please only indicate the size of the tower.\n");
		return (1);
	}
	init(tower, ft_atoi(av[1]));
	print_tower(tower);
	hanoi(tower);
	free(tower);
	return (0);
}

void	init(t_tower *tower, int size)
{
	tower->size = size;
	tower->move = size;
	tower->old = malloc(sizeof(int) * size);
	tower->new = malloc(sizeof(int) * size);
	tower->tmp = malloc(sizeof(int) * size);
	while (--size >= 0)
	{
		tower->old[size] = 1 + size;
		tower->new[size] = 0;
		tower->tmp[size] = 0;
	}
}

void	print_tower(t_tower *tower)
{
	int		str_size;
	int		i;
	char	*str;

	str_size = ((tower->size * 2 + 1) * 2 + 3 + 1)
		* ((tower->size + 1) * 2 + 3);
	str = malloc(sizeof(char) * (str_size + 1));
	i = 0;
	while (i < str_size + 1)
		str[i++] = '\0';
	i = 0;
	while (i < tower->size)
	{
		add_hanoi_line_to_str(str, tower->size, tower->old[i]);
		add_char_to_str(str, ' ', 1);
		add_hanoi_line_to_str(str, tower->size, tower->new[i]);
		add_char_to_str(str, '\n', 1);
		i++;
	}
	print_tower_part_2(str, tower, str_size);
}

void	print_tower_part_2(char *str, t_tower *tower, int str_size)
{
	int	i;

	add_char_to_str(str, '=', tower->size * 2 + 1);
	add_char_to_str(str, ' ', 1);
	add_char_to_str(str, '=', tower->size * 2 + 1);
	add_char_to_str(str, '\n', 2);
	i = 0;
	while (i < tower->size)
	{
		add_char_to_str(str, ' ', tower->size);
		add_hanoi_line_to_str(str, tower->size, tower->tmp[i]);
		add_char_to_str(str, '\n', 1);
		i++;
	}
	add_char_to_str(str, ' ', tower->size);
	add_char_to_str(str, '=', tower->size * 2 + 1);
	add_char_to_str(str, '\n', 1);
	add_char_to_str(str, '\0', 2);
	write(1, str, str_size);
	free(str);
}
