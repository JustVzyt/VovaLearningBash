/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 13:02:07 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 19:38:14 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

void	ft_putstr_non_printable(char *str)
{
	int	i;
	int	as_num;

	i = 0;
	while (str[i] != '\0')
	{
		as_num = (int)(str[i]);
		if (as_num <= 31 || as_num == 127)
		{
			write(1, &(as_num), 1);
		}
		else
		{
			write(1, &str[i], 1);
		}
		i++;
	}
}

int main(void) {
	char a[] = "Hello wor\nld!";
	ft_putstr_non_printable(a);
	return 0;
}
