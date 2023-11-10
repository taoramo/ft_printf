/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toramo <toramo.student@hive.fi>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/30 10:19:11 by toramo            #+#    #+#             */
/*   Updated: 2023/10/30 10:19:13 by toramo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned char	*ptr1;
	unsigned char	*ptr2;

	ptr1 = (unsigned char *)s1;
	ptr2 = (unsigned char *)s2;
	while (n && *ptr1 && *ptr1 == *ptr2)
	{
		ptr1++;
		ptr2++;
		n--;
	}
	if (n)
		return (*ptr1 - *ptr2);
	else
		return (0);
}
/*
int	main(void)
{
	char *s1;
	char *s2;
	int result;
	
	
	s1 = "";
	s2 = "";
	result = ft_strncmp(s1, s2, 20);
	printf("%i", result);
	return (0);
}*/
