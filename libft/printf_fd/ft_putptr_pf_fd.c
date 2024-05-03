/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr_pf_fd.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gemartel <gemartel@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 10:46:24 by gemartel          #+#    #+#             */
/*   Updated: 2024/05/03 05:29:30 by gemartel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	print_ptr_addr_fd(int fd, void *ptr, size_t *count_char)
{
	unsigned long	addr;
	char			addr_str[16];
	int				i;

	if (!ptr)
	{
		ft_putstr_pf_fd(fd, "(nil)", count_char);
		return ;
	}
	addr = (unsigned long)ptr;
	ft_putstr_pf_fd(fd, "0x", count_char);
	i = 0;
	while (addr)
	{
		addr_str[i++] = "0123456789abcdef"[addr % 16];
		addr = addr / 16;
	}
	while (i > 0)
		ft_putchar_pf_fd(fd, addr_str[--i], count_char);
}
