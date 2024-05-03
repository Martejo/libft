/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clear_garbage.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 14:27:13 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:43:40 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	clear_garbage(int id_gc, void (*del)(void*))
{
	ft_lstclear(garbage_ptr(id_gc), del);
}
