/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/05 15:14:22 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/05 15:14:22 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_alphabet(void)
{
	int		i;
	char	alphabeth;

	i = 97;
	while (i <= 122)
	{
		alphabeth = i;
		write(1, &alphabeth, 1);
		i++;
	}
}
