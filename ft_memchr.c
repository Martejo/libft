/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:45:52 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:42:41 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*byte;
	size_t			i;

	byte = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		if (byte[i] == (unsigned char)c)
			return ((void *)&byte[i]);
		i++;
	}
	return (NULL);
}
