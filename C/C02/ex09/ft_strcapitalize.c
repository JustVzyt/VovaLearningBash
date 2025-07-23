/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 11:08:28 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 12:22:22 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	a;
	int	new_word;

	i = 0;
	new_word = 1;
	while (str[i] != '\0')
	{
		a = (int)str[i];
		if (a >= 97 && a <= 122 && new_word == 1)
		{
			str[i] = (char)(a - 32);
		}
		if (a >= 65 && a <= 90 && new_word == 0)
		{
			str[i] = (char)(a + 32);
		}
		new_word = 0;
		if (a < 48 || (a > 57 && a < 65) || (a > 90 && a < 97) || a > 122)
		{
			new_word = 1;
		}
		i++;
	}
	return (str);
}
