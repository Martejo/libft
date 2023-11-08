/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:41 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/08 11:53:51 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*current;

	current = s;
	while (*current != '\0')
	{
		if (*current == (unsigned char)c)
			return ((char *)current);
		current++;
	}
	if (*current == (unsigned char)c)
		return ((char *)current);
	return (NULL);
}
