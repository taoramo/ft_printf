/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <toramo.student@hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 09:22:02 by toramo            #+#    #+#             */
/*   Updated: 2023/10/30 09:22:07 by toramo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_str_to_int(const char *str)
{
	int	i;
	int	result;

	result = 0;
	i = 0;
	while (str[i] != 0 && str[i] > 47 && str[i] < 58)
	{
		result = result * 10 + (str[i] - 48);
		i++;
	}
	return (result);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	m;

	i = 0;
	m = 1;
	while (((str[i] == 32) || (str[i] > 8 && str[i] < 14)) && str[i] != 0)
	{
		i++;
	}
	if ((str[i] == 43 || str[i] == 45) && str[i] != 0)
	{
		if (str[i] == 45)
			m = -1;
		i++;
	}
	return (ft_str_to_int(&str[i]) * m);
}
/*
int	ft_abs(int n)
{
	if (n < 0)
	{
		n = n * -1;
		return (n);
	}
	else
	{
		return (n);
	}
}

void	ft_putnbr(int nb)
{
	int		n;
	char	nbr[12];

	n = 1;
	if (nb < -2147483647)
	{
		write(1, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
		write(1, "-", 1);
	nb = ft_abs(nb);
	nbr[0] = (nb % 10) + 48;
	while (nb / 10 != 0)
	{
		nb = nb / 10;
		nbr[n] = (nb % 10) + 48;
		n++;
	}
	while (n >= 0)
	{
		write(1, &nbr[n - 1], 1);
	n--;
	}
	return ;
}
int	main(void)
{	
	int		i;
	char	str[100] = "\n \v \f \r \t --+-09384762t67";

	i = ft_atoi(str);
	ft_putnbr(i);
}*/
