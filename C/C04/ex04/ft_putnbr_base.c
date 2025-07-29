/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/29 15:32:51 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/29 18:11:24 by justvzyt         ###   ########.fr       */
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

unsigned int	len(char *base)
{
	unsigned int	i;

	i = 0;
	while (base[++i] != '\0')
		;
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	unsigned int	nn;

	if (nbr < 0)
	{
		nbr *= -1;
		write(1, "-", 1);
	}
	nn = nbr;
	if (check_base(base) != 0)
	{
		if (nn == len(base))
			write(1, &base[nn - 1], 1);
		else
		{
			if (nn / len(base) != 0)
				ft_putnbr_base(nn / len(base), base);
			write(1, &(base[nn % len(base)]), 1);
		}
	}
	if (nbr == -2147483648)
		write(1, "0", 1);
}

//int	main(void)
//{
//	ft_putnbr_base(-2147483648, "01");
//	return 0;
//}