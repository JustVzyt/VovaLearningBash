/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/13 15:27:45 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/13 16:03:29 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <stdio.h>

int	len(char **strs, int size)
{
	int	i;
	int	j;
	int	counter;

	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
		{
			counter++;
			j++;
		}
		i++;
	}
	return (counter);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*result;
	char	*res2;
	int		i;
	int		j;

	if (size == 0)
		return ("\0");
	result = malloc(len(strs, size) + 1);
	res2 = result;
	i = 0;
	while (i < size)
	{
		j = 0;
		while (strs[i][j] != '\0')
			*result++ = strs[i][j++];
		j = 0;
		if (i != size - 1)
		{
			while (sep[j] != '\0')
				*result++ = sep[j++];
		}
		i++;
	}
	*result = '\0';
	return (res2);
}

int main(void) {
	char* r[] = {"Hello"};
	printf("%s\n", ft_strjoin(0, NULL, ","));
}