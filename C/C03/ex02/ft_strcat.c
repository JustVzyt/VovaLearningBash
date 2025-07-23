/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/07/23 20:44:04 by justvzyt          #+#    #+#             */
/*   Updated: 2025/07/23 20:53:23 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcat(char *dest, char *src)
{
	int	count_one;
	int	i;

	count_one = 0;
	while (dest[count_one] != '\0')
	{
		count_one++;
	}

	i = 0;
	while (src[i] != '\0')
	{
		dest[count_one + i] = src[i];
		i++;
	}
	return (dest);
}
