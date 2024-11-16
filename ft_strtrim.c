/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: iaktas <iaktas@student.42istanbul.com.t    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/10 20:49:14 by iaktas            #+#    #+#             */
/*   Updated: 2024/11/13 20:24:28 by iaktas           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	begin;
	size_t	end;

	begin = 0;
	while (s1[begin] && ft_strchr(set, s1[begin]))
		begin++;
	if (!s1)
		return (ft_strdup(""));
	end = ft_strlen(s1) -1;
	while (end > begin && ft_strchr(set, s1[end]))
		end--;
	return (ft_substr(s1, begin, end - begin + 1));
}
