/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/27 13:32:53 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/05 14:11:58 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
** The stpncpy() and strncpy() functions copy at most len characters from src
** into dst If src is less than len characters long, the remainder of dst is
** filled with `\0' characterserOtherwise, dst is not terminated.
*/

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t len)
{
	size_t		i;

	i = 0;
	while (src[i] && i < len)
	{
		dst[i] = src[i];
		i++;
	}
	while (i < len)
	{
		dst[i] = '\0';
		i++;
	}
	return (dst);
}
