/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/24 11:37:30 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/24 13:54:24 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int	count_one;
	unsigned int	i;

	count_one = 0;
	while (dest[count_one] != '\0')
	{
		count_one++;
	}

	i = 0;
	while (src[i] != '\0' && i < size - count_one)
	{
		//printf("i = %d\n", i);
		dest[count_one + i] = src[i];
		i++;
	}
	dest[count_one + i] = '\0';
	return (i);
}

//int main(void) {
//	char a[30] = "Test";
//	char b[] = "Test";
//	ft_strlcat(a, b, 10);
//	printf("%s\n", a);
//	return 0;
//}