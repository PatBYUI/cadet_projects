/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pnopjira <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/11 12:54:19 by pnopjira          #+#    #+#             */
/*   Updated: 2022/04/13 13:25:56 by pnopjira         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nMember, size_t size)
{
	void	*ptr;
	size_t	total;

	total = nMember * size;
	if (total < nMember || total < size)
		return (NULL);
	else
	{
		if (total == 0)
			return (malloc(1));
		ptr = malloc(total);
		if (!ptr)
			return (NULL);
		ft_bzero(ptr, total);
		return (ptr);
	}
}
