/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:28:11 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:28:14 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t len)
{
	size_t	len_needle;
	size_t	i;
	size_t	windows_start;

	len_needle = ft_strlen(s2);
	if (len_needle == 0)
		return ((char *)s1);
	windows_start = 0;
	while (s1[windows_start] != '\0' && windows_start < len)
	{
		i = 0;
		while (i < len_needle && windows_start + i
			< len && s1[windows_start + i] == s2[i])
			i++;
		if (i == len_needle)
			return ((char *)&s1[windows_start]);
		windows_start++;
	}
	return (NULL);
}
