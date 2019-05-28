/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 10:05:46 by kdube             #+#    #+#             */
/*   Updated: 2019/05/23 14:00:48 by kdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char    *ft_strstr(const char *haystack, const char *needle)
{
	unsigned int position;
	unsigned int index;

	if (!*needle)
		return ((char*)haystack);
	else
	{
		position = 0;
	}
	while (haystack[position] != '\0')
	{
		if (haystack[position] == needle[0])
		{
			index = 1;
			while (needle[index] != '\0' && haystack[position + index] == needle[index])
				++index;
			if (needle[index] == '\0')
				return ((char*)&haystack[position]);
		}
		++position;
	}
	return (0);
}
