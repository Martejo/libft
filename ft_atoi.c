/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 15:57:16 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 16:56:29 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <limits.h>

static int	ft_len(const char *str)
{
	int	i;

	i = 0;
	while (str[i] && str[i] >= '0' && str[i] <= '9')
		i++;
	return (i);
}

static int	is_over_int_range(const char *nptr, int sign)
{
	if (ft_len(nptr) > 10)  // Plus de 10 chiffres signifie certainement un dépassement pour un int de 32 bits.
		return (sign);
	else if (ft_len(nptr) == 10)
	{
		if (sign == 1 && ft_strncmp("2147483647", nptr, 10) < 0)
			return (1);  // Dépassement positif.
		if (sign == -1 && ft_strncmp("2147483648", nptr, 10) < 0)
			return (-1); // Dépassement négatif.
	}
	return (0);
}


int	ft_atoi(const char *nptr)
{
	int			i;
	int			nbr;
	int			sign;

	i = 0;
	nbr = 0;
	sign = 1;
	while (nptr[i] == ' ' || (nptr[i] >= 9 && (nptr[i] <= 13)))
		i++;
	if (nptr[i] == '+' || nptr[i] == '-')
	{
		if (nptr[i] == '-')
			sign = -sign;
		i++;
	}
	if (is_over_int_range(&nptr[i], sign) == 1)
		return (-1);
	else if (is_over_int_range(&nptr[i], sign) == -1)
		return (0);
	while (nptr[i] >= '0' && nptr[i] <= '9')
	{
		nbr = nbr * 10 + nptr[i] - 48;
		i++;
	}
	return (nbr * sign);
}

/*int main(void)
{
    char *tests[] = {
        "42",
        "-42",
        "0",
        "   1024",
        "+512",
        "2147483647",    // INT_MAX
        "-2147483648",   // INT_MIN
        "2147483648",    // INT_MAX + 1
        "-2147483649",   // INT_MIN - 1
        "9999999999",    // Bien au-delà de INT_MAX
        "-9999999999",   // Bien au-delà de INT_MIN
        "1.23",          // Non entièrement numérique
        "a123",          // Non numérique
        "+-42",          // Signes multiples
        "-+42",          // Signes multiples
        "   +0",         // Espaces blancs avec signe
        "    -0",        // Espaces blancs avec signe négatif
        "00000123",      // Zéros non significatifs
        "\t\n\v\f\r 42", // Espaces blancs issus de l'ASCII
        "42a5",          // Numérique suivi de non numérique
        NULL             // Marqueur de fin
    };

    for (int i = 0; tests[i] != NULL; i++)
    {
        int result = ft_atoi(tests[i]);
        printf("ft_atoi(\"%s\") = %d\n", tests[i], result);
    }

    return 0;
}*/