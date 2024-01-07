/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ahazar <ahazar@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/10 03:09:31 by ahazar            #+#    #+#             */
/*   Updated: 2023/09/13 17:45:57 by ahazar           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	turn(char *str)
{
	int		i;

	i = 0;
	while (str[i] != 0)
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] += 32;
		i++;
	}
}

char	*ft_strcapitalize(char *str)
{
	int		i;
	int		cont;

	cont = 0;
	i = 0;
	turn (str);
	while (str[i] != 0)
	{
		if (cont == 0 && (str[i] >= 'a' && str[i] <= 'z'))
		{
			str[i] -= 32;
			cont = 1;
		}
		if (!(str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			cont = 0;
		if ((str[i] >= '0' && str[i] <= '9')
			&& (str[i + 1] >= 'a' && str[i + 1] <= 'z'))
			cont = 1;
		i++;
	}
	return (str);
}
