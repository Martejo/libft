/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   char2dup.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:47:49 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:29:30 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	**char2dup(char **char2)
{
	size_t	i;
	size_t	size;
	char	**char2dup;

	i = 0;
	size = char2len(char2) + 1;
	char2dup = (char **) ft_calloc(size, sizeof(char *));
	if (!char2dup)
		return (NULL);
	while (i < size - 1)
	{
		char2dup[i] = ft_strdup(char2[i]);
		if (!char2dup[i])
			return (free_char2(&char2dup), NULL);
		i++;
	}
	return (char2dup);
}
