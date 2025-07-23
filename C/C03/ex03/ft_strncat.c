/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:53:43 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 21:05:52 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	int	count_one;
	unsigned int	i;

	count_one = 0;
	while (dest[count_one] != '\0')
	{
		count_one++;
	}

	i = 0;
	while (src[i] != '\0' && i < nb)
	{
		//printf("i = %d\n", i);
		dest[count_one + i] = src[i];
		i++;
	}
	return (dest);
}

//int main(void)
//{
//	char a[10] = "Hello";
//	char b[5] = "world";
//	printf("%s\n", ft_strncat(a, b, 5));
//	return 0;
//}