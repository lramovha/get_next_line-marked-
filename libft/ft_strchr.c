/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 12:03:22 by lramovha          #+#    #+#             */
/*   Updated: 2019/05/30 13:44:32 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/*
**The strchr() function locates the first occurrence of c (converted to a char)
**in the string pointed to by s  The terminating null character is considered
**to be part of the string; therefore if c is `\0', the functions locate the
**terminating `\0'.
*/

#include <unistd.h>

char	*ft_strchr(const char *s, int c)
{
	if (c == '\0')
	{
		while (*s)
			s++;
		return ((char*)s);
	}
	while (*s)
	{
		if (*s == c)
			return ((char*)s);
		s++;
	}
	return (NULL);
}
