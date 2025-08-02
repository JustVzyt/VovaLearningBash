/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/02 19:46:04 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/02 19:49:29 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	product;

	product = 1;
	if (nb < 0)
		return (0);
	while (nb > 1)
		product *= nb--;
	return (product);
}
