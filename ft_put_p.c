/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_put_p.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:59:33 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 19:13:25 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put_ptr(unsigned long nbr)
{
	char	*chars;
	int		count;

	chars = "0123456789abcdef";
	count = 0;
	if (nbr >= 16)
	{
		count += ft_put_ptr(nbr / 16);
		count += ft_put_ptr(nbr % 16);
	}
	else
		count += ft_putchar(chars[nbr]);
	if (count == -1)
		return (-1);
	return (count);
}

int	ft_put_p(void *ptr)
{
	int				count;
	unsigned long	adr;
	int				ret;

	adr = (unsigned long)ptr;
	count = ft_putstr("0x");
	if (count == -1)
		return (-1);
	ret = ft_put_ptr(adr);
	if (ret == -1)
		return (-1);
	count += ret;
	return (count);
}
