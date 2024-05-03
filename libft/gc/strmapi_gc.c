/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_gc.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/09 14:34:04 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:29:30 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*strmapi_gc(char const *s, char (*f)(unsigned int, char), int id_gc)
{
	char	*ptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	ptr = calloc_gc(len + 1, 1, id_gc);
	if (ptr == NULL)
		return (NULL);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
