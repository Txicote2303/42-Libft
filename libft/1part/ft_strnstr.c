/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/20 14:45:19 by frcarval          #+#    #+#             */
/*   Updated: 2021/10/26 04:42:51 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

static int	compar(const char *haystack, const char *needle, size_t len, int i)
{
	int	u;

	u = 0;
	while (i <= len)
	{
		if (needle[u] == '\0')
			return (1);
		if (haystack[i] != needle[u])
			return (0);
		u++;
		i++;
	}
	return (0);
}

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	int	i;

	i = 0;
	if (needle[0] == '\0')
		return ((char *) haystack);
	while (needle[i] != '\0')
		i++;
	if (i > len)
		return (NULL);
	if (haystack[0] == '\0')
		return (NULL);
	i = 0;
	while (i <= len)
	{
		if (haystack[i] == needle[0])
		{
			if (compar(haystack, needle, len, i) == 1)
				return ((char *) &haystack[i]);
		}
		i++;
	}
	return (NULL);
}
