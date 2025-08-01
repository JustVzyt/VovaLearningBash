
/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 13:10:50 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/21 13:10:54 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb(void)
{
	char	buf[5];

	buf[0] = '0' - 1;
	buf[3] = ',';
	buf[4] = ' ';
	while (++buf[0] <= '7')
	{
		buf[1] = buf[0];
		while (++buf[1] <= '8')
		{
			buf[2] = buf[1];
			while (++buf[2] <= '9')
			{
				write(1, buf, 5);
			}
		}
	}
}

int main(void) {
	ft_print_comb();
	return 0;
}