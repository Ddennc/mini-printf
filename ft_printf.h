/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: denysdudka <denysdudka@student.42.fr>      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/15 17:17:34 by denysdudka        #+#    #+#             */
/*   Updated: 2024/10/16 19:44:56 by denysdudka       ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <string.h>
# include <stdarg.h>
# include <stdio.h>

int	ft_printf(const char *str, ...);
int	ft_checktype(char c, va_list *args);
int	ft_put_p(void *ptr);
int	ft_putchar(char c);
int	ft_puthex_up(unsigned int i);
int	ft_puthex(unsigned int i);
int	ft_putnbr(int i);
int	ft_putstr(char *str);
int	ft_putunnbr(unsigned int i);
int	ft_put_ptr(unsigned long nbr);
int	ft_putnbr_recursive(int i);

#endif