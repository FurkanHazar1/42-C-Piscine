/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:13:30 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/07 20:20:13 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	write_numbers(int numbers [], int i, int nb)
{
	char	n;
	char	x;

	n = 45;
	if (nb == -2147483648)
	{
		write (1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		write(1, &n, 1);
	if (nb == 0)
	{
		x = 48;
		write (1, &x, 1);
		return ;
	}
	while (i >= 0)
	{
		x = numbers[i] + 48;
		write(1, &x, 1);
		i--;
	}
}

void	ft_putnbr(int nb)
{
	int		i;
	int		numbers[10];
	int		number;

	number = nb;
	i = 0;
	if (number < 0)
		number *= -1;
	while (number != 0)
	{
		if (number < 10)
		{
			numbers[i] = number;
			number = 0;
		}
		else
		{
			numbers[i] = number % 10;
			number = number / 10;
		}
		i++;
	}
	write_numbers(numbers, i - 1, nb);
}
