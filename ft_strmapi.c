/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:28:31 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/08 11:35:04 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*ptr;
	size_t	i;
	size_t	len;

	len = ft_strlen(s);
	i = 0;
	ptr = ft_calloc(len + 1, 1);
	while (s[i])
	{
		ptr[i] = f(i, s[i]);
		i++;
	}
	return (ptr);
}
