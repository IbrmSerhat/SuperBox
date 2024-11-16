/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaktas <iaktas@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:43:59 by iaktas            #+#    #+#             */
/*   Updated: 2024/11/14 19:41:12 by iaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	s_digitcount(int n)
{
	int	count;

	if (n == 0)
		return (1);
	count = 0;
	while (n != 0)
	{
		n /= 10;
		count++;
	}
	return (count);
}

static char	*fill_digit(char *num, long nbr, int sign, size_t len)
{
	num[len--] = '\0';
	if (nbr == 0)
		num[len--] = '0';
	while (nbr != 0)
	{
		num[len--] = (nbr % 10) + '0';
		nbr /= 10;
	}
	if (sign)
		num[len] = '-';
	return (num);
}

char	*ft_itoa(int n)
{
	char	*num;
	size_t	len;
	int		sign;
	long	nbr;

	nbr = n;
	sign = 0;
	if (nbr < 0)
	{
		sign = 1;
		nbr = -nbr;
	}
	len = (size_t)s_digitcount(n) + sign + 1;
	num = (char *)malloc(sizeof(char) * len);
	if (!num)
		return (NULL);
	return (fill_digit(num, nbr, sign, --len));
}
