/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 14:55:01 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 15:25:48 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*byte;
	size_t			i;

	i = 0;
	byte = (unsigned char *)s;
	while (i < n)
	{
		byte[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
