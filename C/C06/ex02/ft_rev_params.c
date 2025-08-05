/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/05 12:17:32 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/05 12:28:58 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char *argv[])
{
	int	i;
	int	size;

	i = argc - 1;
	while (i > 0)
	{
		size = 0;
		while (argv[i][size] != '\0')
			size++;
		write(1, argv[i], size);
		write(1, "\n", 1);
		i--;
	}
}
