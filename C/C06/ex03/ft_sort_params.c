/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:29:13 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/08 21:02:16 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	size;

	i = 1;
	while (i < argc)
	{
		size = 0;
		while (argv[i][size] != '\0')
			size++;
		write(1, argv[i], size);
		write(1, "\n", 1);
		i++;
	}
}
