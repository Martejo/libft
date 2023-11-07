/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:51:08 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/07 13:26:22 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int len_itoa(int n)
{
    int    len;
    
    len = 0;
    while(n > 0)
    {
        n /= 10;
        len++;
    }
    return(len);
}

void is_negative(int *sign, int *n)
{
    if (*n < 0)
    {
        *n *= -1;
        (*sign)++;
    }
}

char * ft_itoa(int n)
{
    char *strNum;
    int sign;
    int len;

    if (n == 0)
        return ft_strdup("0");
    if (n == -2147483648)
        return ft_strdup("-2147483648");
    sign = 0;
    is_negative(&sign, &n);
    len = len_itoa(n);
    strNum = ft_calloc((len + 1) + sign, 1);
    if (strNum == NULL)
        return (NULL);
    if (sign == 0)
        len--;
    while (n > 0)
    {
        strNum[len--] = (n % 10) + '0';
        n /= 10;
    }
    if (sign == 1)
        strNum[0] = '-';
    return (strNum);
}

int main()
{
    int n = 0;
    char *s;

    s = ft_itoa(n);
    printf("s = %s\n", s);
    free(s);
    return (0);
}
