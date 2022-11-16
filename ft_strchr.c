/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 16:41:34 by aascedu           #+#    #+#             */
/*   Updated: 2022/11/16 15:47:06 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	int	i;

	if (c == 0)
		return ((char *)s + (int)ft_strlen(s));
	i = 0;
	while ((unsigned char)c != s[i] && s[i])
		i++;
	if (s[i] == 0)
		return (NULL);
	else
		return ((char *)s + i);
}
/*
#include <stdio.h>
#include <string.h>

int	main(void)
{
	char test[] = "teste";
	
	printf("%p\n%p\n", ft_strchr(test, 0), strchr(test, 0));
}*/
