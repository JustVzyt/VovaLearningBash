/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 10:46:27 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 11:06:05 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	int	i;
	int	as_num;

	i = 0;
	while (str[i] != '\0')
	{
		as_num = (int)str[i];
		if ((as_num >= 97) && (as_num <= 122))
		{
			str[i] = (char)(as_num - 32);
		}
		i++;
	}
	return (str);
}
