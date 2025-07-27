/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:09:34 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/27 12:09:30 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

char	ft_atoi(char *str)
{
	int		i;
	int		count_minuses;
	int		wmp;
	int		delete_everything_status;
	int		g;

	g = 0;
	i = 0;
	count_minuses = 0;
	wmp = -1;
	delete_everything_status = 0;
	while (str[i] != '\0')
	{
		if (str[i] == ' ' || str[i] == '+' || delete_everything_status == 1)
		{
			str[i] = '\a';
		}
		else if (str[i] != '-' && (str[i] < '0' || str[i] > '9') && str[i] != ' ')
		{
			delete_everything_status = 1;
			str[i] = '\a';
		}
		if (str[i] == '-')
		{
			if (count_minuses++ > 0)
				str[i] = '\a';
			else
				wmp = i;
		}
		i++;
	}
	if (count_minuses % 2 == 0 && wmp != -1)
		str[wmp] = '\a';
	printf("%s\n", str);
	return (*str);
}


int main(void) {
	char a[] = "   --+---+1234ab567";
	printf("%s", ft_atoi(a));
	return 0;
}
