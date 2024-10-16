/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:59:29 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 19:18:05 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(unsigned int i)
{
	int		counter;
	int		ret;
	char	*base;

	counter = 0;
	base = "0123456789abcdef";
	if (i >= 16)
	{
		ret = ft_puthex(i / 16);
		if (ret == -1)
			return (-1);
		counter += ret;
	}
	ret = ft_putchar(base[i % 16]);
	if (ret == -1)
		return (-1);
	counter += ret;
	return (counter);
}
