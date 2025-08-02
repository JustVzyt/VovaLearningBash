/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 20:44:02 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/02 20:55:54 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	res;

	if (nb < 0)
		return (0);
	res = 0;
	while (res * res <= nb)
	{
		if (res * res == nb)
			return (res);
		res++;
	}
	if (res == nb)
		return (0);
	return (res);
}

