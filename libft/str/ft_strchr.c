/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:27:16 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:46:52 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
