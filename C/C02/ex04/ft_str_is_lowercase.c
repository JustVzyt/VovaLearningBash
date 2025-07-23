/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:43:15 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 10:44:10 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;
	int	as_num;

	i = 0;
	while (str[i] != '\0')
	{
		as_num = (int)str[i];
		if ((as_num < 97) || (as_num > 122))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
