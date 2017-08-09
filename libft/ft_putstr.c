/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpascal <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/04 20:08:17 by jpascal           #+#    #+#             */
/*   Updated: 2016/11/15 03:46:42 by jpascal          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putstr(const char *s)
{
	int index;

	index = 0;
	if (s == NULL)
		ft_putstr("(null)");
	while (s[index] != '\0')
	{
		ft_putchar(s[index]);
		index++;
	}
}
