/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:53:43 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/24 13:53:13 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	i;
	unsigned int	j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}

	j = 0;
	while (src[j] != '\0' && j < nb)
	{
		dest[i + j] = src[j];
		j++;
	}

	dest[i + j] = '\0';
	return (dest);
}

//int main(void)
//{
//	char a[40] = "Hello";
//	char b[5] = "World";
//	char *result = ft_strncat(a, b, 5);
//	printf("%s", result);
//	return 0;
//}