/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: eerbek <eerbek@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 13:26:55 by eerbek            #+#    #+#             */
/*   Updated: 2023/03/06 13:26:56 by eerbek           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include "./libft/libft.h"
# include <stdarg.h>

void	ft_putchar(int x, int *index);
void	ft_putstr(char *new, int *byte);
void	ft_putnumber(int x, int *byte);
void	ft_putunsigned(unsigned int x, int *byte);
void	ft_puthex(unsigned int n, int type, int *byte);
void	ft_putaddress(unsigned long long n, int *byte);

int		ft_printf(const	char *str, ...);

#endif
