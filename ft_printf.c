/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 16:59:54 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 20:21:44 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_checktype(char c, va_list *args)
{
	int	ret;

	ret = 0;
	if (c == 'c')
		ret = ft_putchar(va_arg(*args, int));
	else if (c == 'd' || c == 'i')
		ret = ft_putnbr(va_arg(*args, int));
	else if (c == 'u')
		ret = ft_putunnbr(va_arg(*args, unsigned int));
	else if (c == 'p')
		ret = ft_put_p(va_arg(*args, void *));
	else if (c == 's')
		ret = ft_putstr(va_arg(*args, char *));
	else if (c == 'x')
		ret = ft_puthex(va_arg(*args, unsigned int));
	else if (c == 'X')
		ret = ft_puthex_up(va_arg(*args, unsigned int));
	else if (c == '%')
	{
		ret = ft_putchar('%');
	}
	if (ret == -1)
		return (-1);
	return (ret);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		counter;
	int		ret;
	va_list	args;

	i = 0;
	counter = 0;
	va_start(args, str);
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ret = ft_checktype(str[i], &args);
			if (ret == -1)
			{
				va_end(args);
				return (-1);
			}
			counter += ret;
		}
		else
		{
			ret = write(1, &str[i], 1);
			if (ret == -1)
			{
				va_end(args);
				return (-1);
			}
			counter += ret;
		}
		i++;
	}
	va_end(args);
	return (counter);
}
