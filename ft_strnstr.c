/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:52:48 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:50:52 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_needle;
	size_t	i;
	size_t	windows_start;

	len_needle = ft_strlen(s2);
	i = 0;
	windows_start = 0;
	if (len_needle == 0 || len < len_needle)
		return (NULL);
	while (windows_start < len)
	{
		i = 0;
		while (i < len_needle && s2[i] == s1[windows_start + i])
			i++;
		if (i == len_needle)
			return ((char *)&s1[windows_start]);
		windows_start++;
	}
	return (NULL);
}
