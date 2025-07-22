/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/22 21:52:03 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/22 21:57:33 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	i;
	int	as_num;

	i = 0;
	while (str[i] != '\0')
	{
		as_num = (int)str[i];
		printf("%d stands for %c\n", as_num, str[i]);
		if ((as_num < 48) || (as_num > 57))
		{
			return (0);
		}
		i++;
	}
	return (1);
}
