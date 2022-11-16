/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aascedu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:01:39 by aascedu           #+#    #+#             */
/*   Updated: 2022/11/09 09:23:12 by aascedu          ###   ########lyon.fr   */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/*char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	last_pos;
	if (c == 0)
		return ((char *)s + (int)ft_strlen(s));
	i = 0;
	last_pos = 0;
	while (s[i])
	{
		if (s[i] == c)
			last_pos = i;
		i++;
	}
	if (s[i] == 0)
		return (NULL);
	else
		return ((char *)s + last_pos);
}*/

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	if (c == 0)
		return ((char *)s + (int)ft_strlen(s));
	i = (int)ft_strlen(s) - 1;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)s + i);
		i--;
	}
	return (NULL);
}
