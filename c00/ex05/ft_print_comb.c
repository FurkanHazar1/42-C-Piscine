/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:14:42 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/05 15:14:42 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_function(char f, char s, char t)
{
	while (t <= '9')
	{
		write(1, &f, 1);
		write(1, &s, 1);
		write(1, &t, 1);
		if (f != '7')
			write(1, ", ", 2);
		t++;
	}
}

void	ft_print_comb(void)
{
	char	f_c;
	char	s_c;
	char	t_c;

	f_c = '0';
	s_c = '1';
	t_c = '2';
	while (f_c < '8')
	{
		while (s_c < '9')
		{
			write_function(f_c, s_c, t_c);
			s_c++;
			t_c = s_c + 1;
		}
		s_c = f_c + 1;
		f_c++;
	}
}
