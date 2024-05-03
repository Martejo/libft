/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   malloc_gc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:25:00 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:46:14 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*malloc_gc(size_t size, int id_gc)
{
	void	*ptr;

	ptr = malloc(size);
	if (!ptr)
		return (NULL);
	if ((!add_to_garbage(ptr, id_gc)))
		return (free(ptr), NULL);
	return (ptr);
}
