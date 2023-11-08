/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:30 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:26:59 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t  ft_strlcpy(char *dst, const char *src, size_t size)
{
    size_t  i;
    size_t  len;

    len = 0;
    while (src[len])
        len++;
    if (size == 0) // Si size est 0, rien ne doit être copié
        return (len);
    i = 0;
    while (src[i] != '\0' && i < size - 1) // Copie un caractère de moins que la taille pour laisser de la place au '\0'
    {
        dst[i] = src[i];
        i++;
    }
    dst[i] = '\0'; // Assure que la chaîne est toujours terminée par '\0'
    return (len);
}

