/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/18 11:29:57 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/08 12:37:15 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			e;
	unsigned char	*s1;
	unsigned char	k;

	e = 0;
	s1 = (unsigned char *)s;
	k = (unsigned char)c;
	while (n--)
	{
		if (s1[e] == k)
			return (s1 + e);
		e++;
	}
	return (NULL);
}
