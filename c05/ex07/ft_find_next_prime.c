/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/16 21:14:47 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/19 17:17:25 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	cont;

	cont = 2;
	if (nb == 2147483647)
		return (1);
	if (nb <= 1)
		return (0);
	if (nb == 2)
		return (1);
	while (cont <= nb / cont)
	{
		if (nb % cont == 0)
			return (0);
		cont++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	int	i;

	i = 0;
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
