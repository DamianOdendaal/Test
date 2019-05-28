/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 11:33:54 by kdube             #+#    #+#             */
/*   Updated: 2019/05/27 11:48:20 by kdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <string.h>

char	*ft_strcat(char *dest, const char *src)
{
	int i;

	i = 0;
	while (*dest)
	{
		i++;
	}
	while (*src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	dest = dest - i;
	return (dest);
}
