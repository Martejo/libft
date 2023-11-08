/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:30:25 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 12:50:28 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
static int count_subchain(char *s, char c)
{
    unsigned int count;
    size_t i;
    int isOnSeparator;

    isOnSeparator = 1;
    i = 0;
    count = 0;
    while (s[i])
    {
        if (s[i] != c && isOnSeparator) //  isonseparator == a 1
            count++; 
        isOnSeparator = (c == s[i]); // condition if( si c == s[i] alors 1 sinon 0)
        i++;
    }
    return (count);
}

static char *create_subchain(char *s, char c)
{
    size_t i;
    size_t len;
    char *str;

    i = 0;
    len = 0;
    str = NULL;
    while (s[len] && s[len] != c)
        len++;
    str = (char *)malloc((len +1) * sizeof(char));
    if (!str)
        return (NULL);
    while (s[i] && s[i] != c)
    {
        str[i] = s[i];
        i++;
    }
    str[i] = '\0';
    return (str);
}


char ** ft_split(char const *s, char c)
{
    char **str;
    size_t i;
    size_t len_subchain;
    size_t j;

    j = 0;
    i = 0;
    len_subchain = count_subchain((char*)s, c);
    if(!(str = (char**)malloc((len_subchain + 1) * sizeof(char*))))
        return (NULL);
    while (s[i] != '\0')
    {
        while (s[i] == c && s[i] != '\0')
            i++;
        if (s[i] != '\0')
            str[j++] = create_subchain((char*)&s[i], c);
        while (s[i] != c && s[i] != '\0')
            i++;
    }
    str[j] = NULL;
    return (str);
}


/*int main(void)
{
    char **result;
    size_t i;
    char *input = "  Thi**  **s is** a*** samp**le***** string with words    ";
    char delimiter = '*';

    // // Appeler ft_strsplit avec la chaîne de caractères et le délimiteur.
    result = ft_split(input, delimiter);
    // // Vérifier que le résultat n'est pas NULL.
    if (result == NULL)
     {
         fprintf(stderr, "Erreur d'allocation de mémoire.\n");
         return 1;
     }
    // // Afficher les sous-chaînes résultantes.
    for (i = 0; result[i] != NULL; i++)
    {
         printf("Sub-string %zu: %s\n", i, result[i]);
          // Libérer la mémoire allouée pour chaque sous-chaîne.
    }

    // // Libérer la mémoire allouée pour le tableau de pointeurs.
    for (int i = 0; result[i] != NULL; i++)
	    free(result[i]);
    free(result);
    return 0;
}*/
