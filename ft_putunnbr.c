/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunnbr.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 18:07:48 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 19:23:03 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putunnbr(unsigned int i)
{
	int	counter;
	int	ret;

	counter = 0;
	if (i > 9)
	{
		ret = ft_putunnbr(i / 10);
		if (ret == -1)
			return (-1);
		counter += ret;
	}
	ret = ft_putchar((i % 10) + '0');
	if (ret == -1)
		return (-1);
	counter += ret;
	return (counter);
}
