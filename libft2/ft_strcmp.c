/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:54:26 by kdube             #+#    #+#             */
/*   Updated: 2019/05/23 09:55:06 by kdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>

int		ft_strcmp(const char *s1, const char *s2)
{
	while ((unsigned char)*s1 == (unsigned char)*s2)
	{
		if (*s1 == '\0')
		{
			return (0);
		}
		s1++;
		s2++;
	}

	return ((unsigned char)*s1 - (unsigned char)*s2);
}
