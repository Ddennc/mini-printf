/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:59:25 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 19:21:30 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr(char *str)
{
	int	counter;
	int	ret;

	counter = 0;
	if (str == NULL)
		return (write(1, "(null)", 6));
	while (str[counter])
	{
		ret = ft_putchar(str[counter]);
		if (ret == -1)
			return (-1);
		counter++;
	}
	return (counter);
}
