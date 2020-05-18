/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/06/10 14:08:55 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/11 16:37:52 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char	*dst;
	char	*map;

	dst = NULL;
	map = NULL;
	if (s || f)
	{
		if (!(dst = ft_strnew(ft_strlen(s))))
			return (NULL);
		map = dst;
		if (s && f)
			while (*s)
				*dst++ = f((char)*s++);
	}
	return (map);
}
