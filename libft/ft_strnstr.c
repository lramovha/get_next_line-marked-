/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lramovha <lramovha@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/05/29 13:16:13 by lramovha          #+#    #+#             */
/*   Updated: 2019/06/05 16:45:19 by lramovha         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*l;

	l = little;
	if (*l == '\0')
		return ((char*)big);
	while (len--)
	{
		if (*l == *big)
			l++;
		else
		{
			big -= (l - little);
			len += (l - little);
			l = little;
		}
		big++;
		if (*l == '\0')
			return ((char*)(big - (l - little)));
		if (*big == '\0')
			break ;
	}
	return (NULL);
}
