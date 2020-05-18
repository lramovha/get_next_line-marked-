/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:01:53 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/04 13:25:02 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strstr(const char *haystack, const char *needle)
{
	const char	*l;
	const char	*p;

	l = needle;
	p = NULL;
	if (*l == '\0')
		return ((char*)haystack);
	while (*haystack)
	{
		if (p != NULL && *haystack == *l)
			l++;
		else
		{
			if (p != NULL)
				haystack = p + 1;
			p = NULL;
			l = needle;
		}
		if (p == NULL && *haystack == *l && (*(p = haystack) || 1))
			l++;
		if (p != NULL && *l == '\0')
			return ((char*)p);
		haystack++;
	}
	return (*haystack == *l ? (char*)haystack : NULL);
}
