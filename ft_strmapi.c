/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaktas <iaktas@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:48:54 by iaktas            #+#    #+#             */
/*   Updated: 2024/11/13 20:24:03 by iaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char			*ret;
	unsigned int	index;

	ret = ft_strdup(s);
	if (ret && s && f)
	{
		index = 0;
		while (ret[index])
		{
			ret[index] = f(index, ret[index]);
			index++;
		}
	}
	return (ret);
}
