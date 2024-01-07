/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:12:39 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/07 15:19:14 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(char f, char s, char t, char fo)
{
	write(1, &f, 1);
	write(1, &s, 1);
	write(1, " ", 1);
	write(1, &t, 1);
	write(1, &fo, 1);
}

void	int_char(int number1, int number2)
{
	char	f;
	char	s;
	char	t;
	char	fo;

	f = (number1 / 10) + 48;
	s = (number1 % 10) + 48;
	t = (number2 / 10) + 48;
	fo = (number2 % 10) + 48;
	write_numbers(f, s, t, fo);
}

void	ft_print_comb2(void)
{
	int		number1;
	int		number2;

	number1 = 0;
	while (number1 < 99)
	{
		number2 = number1 + 1;
		while (number2 <= 99)
		{
			int_char(number1, number2);
			number2++;
			if (number1 != 98)
				write(1, ", ", 2);
		}
		number1++;
	}
}
