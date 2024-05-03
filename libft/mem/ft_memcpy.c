/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:32:20 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:29:30 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memcpy(void *dest, const void *src,	size_t n)
{
	unsigned char			*destination;
	const unsigned char		*source;
	size_t					n_bytes;

	if (dest == NULL && src == NULL)
		return (NULL);
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
