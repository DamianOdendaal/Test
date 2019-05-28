/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:38:58 by kdube             #+#    #+#             */
/*   Updated: 2019/05/24 10:56:30 by kdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

char	*ft_strrchr(const char *s, int c)
{
	char    *last_position;

	last_position = (0);
	while (*s)
	{
		if (*s == c)
			last_position = (char*)s;
		++s;
	}
	if (last_position)
		return (last_position);
	if (c == '\0')
		return ((char*)s);
	return (0);
}
