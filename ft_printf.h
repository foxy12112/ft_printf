/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 10:57:00 by ldick             #+#    #+#             */
/*   Updated: 2024/03/20 11:04:15 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

void	ft_print_char(int c, int *milk);
void	ft_print_hex_lower(unsigned int n, int *milk);
void	ft_print_nbr(int n, int *milk);
void	ft_print_pointers(void *p, int *milk);
void	ft_print_str(char *s, int *milk);
void	ft_print_uns_d(unsigned int n, int *milk);
void	ft_print_hex_upper(unsigned int n, int *milk);
int		ft_printf(const char *format, ...);

#endif