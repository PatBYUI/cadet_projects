/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/27 19:36:10 by pnopjira          #+#    #+#             */
/*   Updated: 2022/04/03 19:54:00 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(void *ptr, int ch, size_t count)
{
	unsigned char	*str;
	unsigned int	i;

	str = (unsigned char *)ptr;
	i = 0;
	if (!ptr)
		return (NULL);
	while (i < count)
	{
		if (*(str + i) == (unsigned char)ch)
			return (str + i);
		i++;
	}
	return (0);
}
