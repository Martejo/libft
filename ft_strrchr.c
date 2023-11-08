/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:39:24 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/08 11:32:07 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*last_occurrence;

	last_occurrence = NULL;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == (unsigned char)c)
			last_occurrence = (char *) &s[i];
		i++;
	}
	if (s[i] == (unsigned char)c)
		last_occurrence = (char *) &s[i];
	return (last_occurrence);
}
