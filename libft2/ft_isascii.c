/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kdube <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/23 09:51:52 by kdube             #+#    #+#             */
/*   Updated: 2019/05/23 09:51:54 by kdube            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_isascii (int i)
{
	if (i >= 00 && i <= 0177)
		return (1);
	else
		return (0);
}