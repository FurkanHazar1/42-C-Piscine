/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 21:00:01 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/07 15:33:43 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int		temp;

	if (*b != 0)
	{
		temp = *b;
		*b = *a % *b;
		*a = *a / temp;
	}
}
