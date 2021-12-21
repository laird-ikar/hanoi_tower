/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   hanoi_tower.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 15:13:50 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/21 15:51:07 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	main(int ac, char *av[])
{
	t_tower	*tower;

	if (ac != 2)
	{
		ft_putstr("Please only indicate the size of the tower.\n");
		return (1);
	}
	init(tower, ft_atoi(av[1]));
	print_tower(tower);
	hanoi()
	return (0);
}

void	init(t_tower *tower, int size)
{
	tower->size = size;
	tower->old = malloc(sizeof(int) * size);
	tower->new = malloc(sizeof(int) * size);
	tower->tmp = malloc(sizeof(int) * size);
	while (size-- >= 0)
	{
		tower->old[size] = tower->size - size;
		tower->new[size] = 0;
		tower->tmp[soze] = 1;
	}
}

void	print_tower(t_tower *tower)
{
	int		str_size;
	char	*str;

	str_size = ((tower->size * 2 + 1) * 2 + 3 + 1)
		* ((tower->size + 1) * 2 + 3);
	str = malloc(sizeof(char) * (str_size + 1));
	/*
	**	TODO
	**	boucles d'affichage
	*/
	write(1, str, str_size);
	free(str);
}

void	hanoi(void)
{
	/*
	**	TODO
	**	algorithm
	*/
}
