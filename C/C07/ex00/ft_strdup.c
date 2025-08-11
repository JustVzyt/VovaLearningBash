/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/08 21:02:59 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/11 21:16:15 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*result;
	int		i;

	i = 0;
	while (src[i] != '\0')
		i++;
	result = malloc(i + 1);
	i = 0;
	while (src[i] != '\0')
	{
		*(result + i) = src[i];
		i++;
	}
	*(result + i) = '\0';
	return (result);
}
