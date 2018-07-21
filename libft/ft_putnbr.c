/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eonwe <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/05/31 10:42:45 by eonwe             #+#    #+#             */
/*   Updated: 2018/06/08 12:38:56 by eonwe            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr(int n)
{
	long int e;

	e = n;
	if (e < 0)
	{
		e = e * (-1);
		ft_putchar('-');
	}
	if (e > 9)
	{
		ft_putnbr(e / 10);
		ft_putnbr(e % 10);
	}
	else
		ft_putchar(e + '0');
}
