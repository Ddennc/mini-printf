/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:59:27 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 20:25:43 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr(int i)
{
	int	counter;
	int	ret;

	counter = 0;
	if (i == -2147483648)
		return (write(1, "-2147483648", 11));
	if (i < 0)
	{
		ret = ft_putchar('-');
		if (ret == -1)
			return (-1);
		counter += ret;
		i = -i;
	}
	if (i > 9)
	{
		ret = ft_putnbr(i / 10);
		if (ret == -1)
			return (-1);
		counter += ret;
	}
	ret = ft_putchar(i % 10 + '0');
	if (ret == -1)
		return (-1);
	counter += ret;
	return (counter);
}
