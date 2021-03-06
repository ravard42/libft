/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ravard <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/01/16 23:49:05 by ravard            #+#    #+#             */
/*   Updated: 2016/01/16 23:49:10 by ravard           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	unsigned char	d;

	d = (unsigned char)c;
	if (c < 0 || c > 255)
		return (0);
	else if ((d >= 65 && d <= 90) || (d >= 97 && d <= 122))
		return (1);
	else
		return (0);
}
