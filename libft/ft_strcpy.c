/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:05:59 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/27 17:08:07 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The stpcpy() and strcpy() functions copy the string src to dst
** (including the terminating `\0' character.)
*/

#include "libft.h"

char	*ft_strcpy(char *dst, const char *src)
{
	size_t		i;

	i = 0;
	while (src[i])
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (dst);
}
