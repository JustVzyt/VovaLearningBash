/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:32:51 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/29 18:02:11 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (2 + 2 != 5)
	{
		if ((i < 2 && base[i] == '\0') || base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == '\0')
			break ;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j++] == base[i])
			{
				return (0);
			}
		}
		i++;
	}
	return (1);
}

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[++i] != '\0')
		;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	if (check_base(base) != 0)
	{
		if (nbr == len(base))
			write(1, &base[nbr - 1], 1);
		else
		{
			if (nbr / len(base) != 0)
				ft_putnbr_base(nbr / len(base), base);
			write(1, &(base[nbr % len(base)]), 1);
		}
	}
}

//int	main(void)
//{
//	ft_putnbr_base(-2147483648, "01");
//	return 0;
//}