/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 10:41:39 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 10:51:26 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char *dest;
    size_t i;
    size_t s_len;

    if (!s)
        return (NULL);

    s_len = ft_strlen(s);
    if (start >= s_len)
    {
        // Utiliser malloc pour allouer une chaîne vide
        dest = (char *)malloc(sizeof(char));
        if (!dest)
            return (NULL);
        dest[0] = '\0';
        return (dest);
    }

    // Ajuster len si start+len dépasse la fin de la chaîne s
    if (start + len > s_len) {
        len = s_len - start;
    }

    dest = (char *)malloc((len + 1) * sizeof(char)); // +1 pour le caractère nul
    if (!dest)
        return (NULL);

    i = 0;
    while (i < len && s[start + i]) // S'assurer de ne pas dépasser len et la fin de s
    {
        dest[i] = s[start + i];
        i++;
    }
    dest[i] = '\0'; // S'assurer que la chaîne est correctement terminée
    return (dest);
}

