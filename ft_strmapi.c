/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 13:28:31 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 13:32:03 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    char *ptr;
    size_t i;
    size_t len;

    len = ft_strlen(s);
    i = 0;
    ptr = ft_calloc(len + 1, 1); // + 1 pour compter le caractère de fin de chaîne 
    // A voir si utiliser strnew ou directement memalloc 
    while (s[i])
    {
        ptr[i] = f(i, s[i]);
        i++;
    }
    return (ptr);
    
}

/*int main()
{
    const char *str = "Hello, World!";
    char *result = ft_strmapi(str, &ft_toupper);

    if (result != NULL)
    {
        printf("Result: %s\n", result);
        free(result); // Libérer la mémoire allouée
    }
    else
    {
        printf("Memory allocation failed.\n");
    }

    return 0;
}*/
