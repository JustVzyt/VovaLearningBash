/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:05:57 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 11:08:04 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	i;
	int	as_num;

	i = 0;
	while (str[i] != '\0')
	{
		as_num = (int)str[i];
		if ((as_num >= 65) && (as_num <= 90))
		{
			str[i] = (char)(as_num + 32);
		}
		i++;
	}
	return (str);
}
