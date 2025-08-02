/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: justvzyt <justvzyt@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/08/01 16:50:47 by justvzyt          #+#    #+#             */
/*   Updated: 2025/08/02 19:41:45 by justvzyt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	check_base(char *base)
{
	int	i;
	int	j;

	i = 0;
	while (1)
	{
		if ((i < 2 && base[i] == '\0') || base[i] == '+' || base[i] == '-')
			return (0);
		if (base[i] == '\0')
			break ;
		j = i + 1;
		while (base[j] != '\0')
		{
			if (base[j++] == base[i])
				return (0);
		}
		i++;
	}
	return (1);
}

int	find_pos(char *where_find, char to_find)
{
	int	i;

	i = 0;
	while (where_find[i] != '\0')
	{
		if (where_find[i] == to_find)
			return (i);
		i++;
	}
	return (-1);
}

int	len(char *base)
{
	int	i;

	i = 0;
	while (base[++i] != '\0')
		;
	return (i);
}

int	last_num_pos(char *str, char *base)
{
	int	i;
	int	l;

	i = 0;
	while (1)
	{
		l = str[i];
		if (find_pos(base, l) == -1 && l != ' ' && l != '-' && l != '+')
			return (i - 1);
		i++;
	}
	return (0);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	sum;
	int	j;
	int	g;

	if (check_base(base) == 0)
		return (0);
	i = last_num_pos(str, base);
	sum = 0;
	while (str[i] != ' ' && str[i] != '+' && str[i] != '-' && i != -1)
	{
		g = find_pos(base, str[i]);
		j = 0;
		while (j++ < (last_num_pos(str, base) - i))
			g *= len(base);
		sum += g;
		i--;
	}
	i = 0;
	while (i < last_num_pos(str, base))
	{
		if (str[i++] == '-')
			sum *= -1;
	}
	return (sum);
}
