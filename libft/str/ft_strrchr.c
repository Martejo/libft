/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/03 05:28:18 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:28:22 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

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
