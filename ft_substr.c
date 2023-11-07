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

char	*ft_substr(char const *s, unsigned int start,size_t len)
{
	char	*dest;
	size_t	i;

	i = 0;
	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
	{
		dest = (char *)malloc(1 * sizeof(char));
		if (!dest)
			return (NULL);
		dest[0] = '\0';
		return (dest);
	}
	dest = (char *)malloc((len - start) * sizeof(char));
	if (!dest)
		return (NULL);
	while (i < len && s[start + i])
	{
		dest[i] = s[start + i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
