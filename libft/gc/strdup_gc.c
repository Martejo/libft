/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strdup_gc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:33:21 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:29:30 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strdup_gc(const char *str, int id_gc)
{
	char	*result;
	size_t	length;

	length = ft_strlen(str);
	result = (char *)malloc_gc((length + 1) * sizeof(char), id_gc);
	if (!result)
		return (NULL);
	length = 0;
	while (str[length] != '\0')
	{
		result[length] = str[length];
		length++;
	}
	result[length] = '\0';
	return (result);
}
