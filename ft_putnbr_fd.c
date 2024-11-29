/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mael-gho <mael-gho@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/24 16:39:30 by mael-gho          #+#    #+#             */
/*   Updated: 2024/11/25 18:03:03 by mael-gho         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	if (n == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (n < 0)
	{
		write (fd, "-", 1);
		n *= -1;
	}
	if (n > 9)
	{
		ft_putnbr_fd((n / 10), fd);
		ft_putchar_fd((n % 10 + 48), fd);
	}
	if (n >= 0 && n <= 9)
	{
		ft_putchar_fd((n + 48), fd);
	}
}
// int main()
// {
//     int fd;
//     fd = open("txt.txt",O_RDWR | O_CREAT);
//     ft_putnbr_fd(124,fd);
// }
