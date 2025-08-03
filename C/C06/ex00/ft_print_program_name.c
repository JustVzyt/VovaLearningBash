/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/03 19:40:29 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/03 20:22:55 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;

	i = argc * 0;
	while (argv[0][i] != '\0')
		i++;
	write(1, argv[0], i);
	write(1, "\n", 1);
	return (0);
}
