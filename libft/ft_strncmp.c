/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/30 11:38:22 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/08 12:46:22 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		ft_strncmp(const char *s1, const char *s2, size_t n)
{
	unsigned int i;

	i = 0;
	if (n == 0)
		return (0);
	else
	{
		while (*s1 && *s2 && --n && (unsigned char)*s1 == (unsigned char)*s2)
		{
			s1++;
			s2++;
		}
	}
	return ((unsigned char)*s1 - (unsigned char)*s2);
}
