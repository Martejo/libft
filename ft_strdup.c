/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:11:56 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/08 11:51:50 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *str)
{
	char	*result;
	size_t	length;

	length = ft_strlen(str);
	result = (char *)malloc((length + 1) * sizeof(char));
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
