/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:34:41 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:34:22 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*current;

	current = s;
	while (*current != '\0')
	{
		if (*current == c)
			return ((char *)current);
		current++;
	}
	return (NULL);
}
