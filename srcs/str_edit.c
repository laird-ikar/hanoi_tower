/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str_edit.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bguyot <bguyot@student.42mulhouse.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/21 21:36:08 by bguyot            #+#    #+#             */
/*   Updated: 2021/12/21 23:27:10 by bguyot           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	add_hanoi_line_to_str(char *str, int size, int line)
{
	int	i;
	int	j;

	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (j < size - line + 1)
	{
		str[i] = ' ';
		i++;
		j++;
	}
	while (j < line * 2 - 1 + size - line + 1)
	{
		str[i] = 'X';
		i++;
		j++;
	}
	while (j < size - line + 1 + line * 2 - 1 + size - line + 1)
	{
		str[i] = ' ';
		i++;
		j++;
	}
}

void	add_char_to_str(char *str, char c, int nb)
{
	int	i;
	int	j;

	(void) c;
	i = 0;
	while (str[i])
		i++;
	j = 0;
	while (j < nb)
	{
		str[i] = c;
		i++;
		j++;
	}
}
