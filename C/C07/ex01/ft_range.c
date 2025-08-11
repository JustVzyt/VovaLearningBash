/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/11 21:28:31 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/11 21:38:28 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	*result;
	int	i;

	if (max <= min)
		return (NULL);
	result = malloc(4 * (max - min));
	i = 0;
	while (min + i < max)
	{
		*(result + i) = min + i;
		i++;
	}

	return (result);
}
