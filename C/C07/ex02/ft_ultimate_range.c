/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/12 10:43:29 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/13 15:27:30 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	if (min >= max)
	{
		range = NULL;
		return (0);
	}
	*range = malloc(4 * (max - min));
	if (range == NULL)
		return (-1);
	i = min;
	while (min < max)
	{
		*range[i] = min;
		min++;
	}
	return (max - min);
}

int main(void) {
	int *range;
	ft_ultimate_range(&range, 1, 5);
}