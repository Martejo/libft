/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:15:25 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 13:02:27 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	void	*ptr;

	// Si l'un des deux est 0, le produit sera 0 donc aucun dépassement n'est possible.
    if (nmemb == 0 || size == 0)
        return malloc(0);

    // Vérification de dépassement: si nmemb > SIZE_MAX / size, alors il y aura un dépassement.
    if (size != 0 && nmemb > (size_t)(-1) / size) // (size_t)(-1) est la plus grande valeur possible pour un size_t.
    {
        return (NULL);
    }
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	return ((void *)ft_memset(ptr, 0, nmemb * size));
}
