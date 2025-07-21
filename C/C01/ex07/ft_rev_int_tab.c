/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/21 17:46:49 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/21 18:29:27 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	pointer;
	int	temp;

	pointer = size - 1;
	while (pointer >= (size / 2))
	{
		temp = tab[pointer];
		tab[pointer] = tab[size - pointer - 1];
		tab[size - pointer - 1] = temp;
		pointer--;
	}
}
