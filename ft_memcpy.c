/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/28 07:17:59 by pnopjira          #+#    #+#             */
/*   Updated: 2022/04/13 18:30:57 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *to, const void *from, size_t numBytes)
{
	char	*dst;
	char	*src;

	dst = to;
	src = (char *)from;
	if (!from || !to)
		return (to);
	while (numBytes-- > 0)
	{
		*dst = *src++;
		dst++;
	}
	return (to);
}
