/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 15:58:15 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/27 15:49:00 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	num_len(int num)
{
	int	division;
	int	len;

	len = 1;
	division = 10;
	while (num % division != num)
	{
		division *= 10;
		len++;
	}
	return (len);
}

int	ppow(int num, int power)
{
	int	product;
	int	i;

	product = num;
	i = 1;
	while (i++ < power)
		product *= num;
	return (product);
}

void	check_for_negative(int *num)
{
	if (*num < 0)
	{
		*num *= -1;
		write(1, "-", 1);
	}
}

/*
Если я скину этот говнокод чату гпт, он меня заблокирует
*/

void	ft_putnbr(int nb)
{
	int		multiplier;
	char	to_print;
	int		res;
	int		i;

	check_for_negative(&nb);
	multiplier = ppow(10, num_len(nb) - 1);
	to_print = (char)(nb / multiplier + 48);
	if (num_len(nb) > 1)
		write(1, &to_print, 1);
	while (multiplier >= 10)
	{
		res = nb;
		i = ppow(10, num_len(nb) - 1);
		while (i >= multiplier)
		{
			res %= i;
			i /= 10;
		}
		res /= (multiplier / 10);
		to_print = (char)(res + 48);
		write(1, &to_print, 1);
		multiplier /= 10;
	}
}


int main(void) {
	int a = -42;
	ft_putnbr(a);
	return 0;
}


