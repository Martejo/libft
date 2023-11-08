/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:04:48 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:11:38 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src,	size_t n)
{
	unsigned char			*destination;
	const unsigned char		*source;
	size_t					n_bytes;

	destination = (unsigned char *)dest;
	source = (const unsigned char *)src;
	n_bytes = 0;
	while (n_bytes < n)
	{
		destination[n_bytes] = source[n_bytes];
		n_bytes++;
	}
	return (dest);
}
