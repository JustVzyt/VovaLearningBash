/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:45:22 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 10:46:10 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	int	i;
	int	as_num;

	i = 0;
	while (str[i] != '\0')
	{
		as_num = (int)str[i];
		if ((as_num < 32) || (as_num > 126))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
