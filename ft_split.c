/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/07 12:30:25 by gemartel          #+#    #+#             */
/*   Updated: 2023/11/08 16:19:51 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_subchain(char *s, char c)
{
	unsigned int	count;
	size_t			i;
	int				is_separator;

	is_separator = 1;
	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] != c && is_separator)
			count++;
		is_separator = (c == s[i]);
		i++;
	}
	return (count);
}

static char	*create_subchain(char *s, char c)
{
	size_t	i;
	size_t	len;
	char	*str;

	i = 0;
	len = 0;
	str = NULL;
	while (s[len] && s[len] != c)
		len++;
	str = (char *)malloc((len + 1) * sizeof(char));
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

char	**ft_split(char const *s, char c)
{
	char	**str;
	size_t	i;
	size_t	len_subchain;
	size_t	j;

	j = 0;
	i = 0;
	len_subchain = count_subchain((char *)s, c);
	str = (char **)malloc((len_subchain + 1) * sizeof(char *));
	if (!str)
		return (NULL);
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (s[i] != '\0')
			str[j++] = create_subchain((char *)&s[i], c);
		while (s[i] != c && s[i] != '\0')
			i++;
	}
	str[j] = NULL;
	return (str);
}
