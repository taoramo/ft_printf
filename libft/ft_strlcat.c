/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <toramo.student@hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:17:50 by toramo            #+#    #+#             */
/*   Updated: 2023/10/30 10:17:52 by toramo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
/*
int	ft_strlen(char *str)
{
	int	n;

	n = 0;
	if (str[0] != 0)
	{
		while (str[n] != 0)
		{
			n++;
		}
	}
	return (n);
}
*/
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;

	i = 0;
	while (i < size && *dst)
	{
		dst++;
		i++;
	}
	if (i == size)
		return (i + ft_strlen((char *)src));
	j = 0;
	while (src[j])
	{
		if (j < size - i - 1)
			*dst++ = src[j];
		j++;
	}
	*dst = 0;
	return (j + i);
}
/*
#include <stdio.h>
int	main(void)
{
	int	i;
	char	s1[20] = "asdf";

	i = ft_strlcat(s1, "qwertt", 20);
	printf("%s output %i", s1, i);
}
*/
