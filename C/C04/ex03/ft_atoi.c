/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/25 16:09:34 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/29 15:28:38 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ppow(int num, int power)
{
	int	product;
	int	i;

	if (power == 0)
		return (1);
	product = num;
	i = 1;
	while (i++ < power)
		product *= num;
	return (product);
}

int	char_to_int(char *string, int number_count, int count_minuses)
{
	int	r;
	int	i;
	int	nums;

	r = 0;
	i = 0;
	nums = 0;
	while (string[i] != '\0')
	{
		if (nums < number_count && string[i] >= '0' && string[i] <= '9')
		{
			r += ppow(10, (number_count - nums - 1)) * ((int)string[i] - 48);
			nums++;
		}
		i++;
	}
	if (count_minuses % 2 != 0)
		r *= -1;
	return (r);
}

int	ft_atoi(char *str)
{
	int	i;
	int	counters[2];

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] >= '0' && str[i] <= '9')
		{
			counters[0]++;
		}
		else if (str[i] == '-' || str[i] == '+' || str[i] == ' ')
		{
			if (str[i] == '-')
				counters[1]++;
		}
		else
			break ;
		//printf("Executed with i = %d; symbol is %c\n", i, str[i]);
		i++;
	}
	return (char_to_int(str, counters[0], counters[1]));
}

int main(void) {
	char a[] = "12345";
	printf("Result: %d\n", ft_atoi("12345"));
	return 0;
}
