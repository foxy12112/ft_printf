/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_str.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ldick <ldick@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/18 12:49:43 by ldick             #+#    #+#             */
/*   Updated: 2024/03/19 13:39:40 by ldick            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_putstr_fd(char *s, int fd)
{
	int	i;

	i = 0;
	while (s[i])
	{
		write(fd, &s[i], 1);
		i++;
	}
}

void	ft_print_str(char *s, int *milk)
{
	if (!s)
	{
		ft_putstr_fd("(null)", 1);
		*milk += 6;
	}
	else
	{
		while (*s)
			ft_print_char(*s++, milk);
	}
}
