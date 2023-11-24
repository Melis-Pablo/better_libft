/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pmelis <pmelis@student.42wolfsburg.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 18:46:51 by pmelis            #+#    #+#             */
/*   Updated: 2023/11/24 18:47:13 by pmelis           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_putnbr(int n)
{
	int	i;

	i = 0;
	if (n == -2147483648)
		return (write(1, "-2147483648", 11));
	if (n < 0)
	{
		i += ft_putchr('-');
		i += ft_putnbr(-n);
	}
	else
	{
		if (n > 9)
			i += ft_putnbr(n / 10);
		i += ft_putchr(n % 10 + '0');
	}
	return (i);
}
