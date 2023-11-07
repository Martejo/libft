/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:38:03 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:10:02 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*cast_dest;
	unsigned char	*cast_src;

	cast_dest = (unsigned char *) dest;
	cast_src = (unsigned char *) src;
	if (dest == 0 && src == 0 && n > 0)
		return (0);
	if (dest < src)
		ft_memcpy(dest, src, n);
	else
	{
		while (n > 0)
		{
			cast_dest[n - 1] = cast_src[n - 1];
			n--;
		}
	}
	return (dest);
}
