/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   free_char2.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/12 13:48:05 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:29:30 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	free_char2(char ***a_char2)
{
	size_t	i;
	char	**char2;

	i = 0;
	char2 = *a_char2;
	while (char2[i])
	{
		free(char2[i]);
		char2[i] = NULL;
		i++;
	}
	free(char2);
}
