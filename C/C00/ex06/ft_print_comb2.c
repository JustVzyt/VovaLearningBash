
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 14:32:52 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/21 14:32:52 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_print_comb2(void)
{
	int	first;

	first = 0;
	while (first <= 99)
	{
		int	second;

		second = 1;

		while (second <= 99)
		{
			if (second > first) {
				//printf("%02d %02d, ", first, second);
				write(1, &second, 7);
			}
			second++;
		}
		first++;

	}
}

int main(void) {
	ft_print_comb2();
	return 0;
}