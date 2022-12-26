/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/25 18:38:57 by pnopjira          #+#    #+#             */
/*   Updated: 2022/04/03 07:13:19 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	os;

	os = 0;
	if (!src)
		return (0);
	while ((os + 1) < dstsize && src[os] != '\0')
	{
		dst[os] = src[os];
		os++;
	}
	if (dstsize > 0)
		dst[os] = '\0';
	return (ft_strlen(src));
}
