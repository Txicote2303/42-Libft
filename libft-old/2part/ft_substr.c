/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 22:49:07 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/06 03:41:31 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*suber(char const *s, unsigned int start, size_t len, char *string)
{
	size_t	i;
	size_t	u;

	i = start;
	u = 0;
	while (i < len + start)
	{
		string[u] = s[i];
		u++;
		i++;
	}
	string[u] = '\0';
	return (string);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*string;
	size_t	u;
	size_t	length;

	u = 0;
	length = ft_strlen(s);
	if (!s)
		return (NULL);
	if (start > length || len == 0)
	{
		string = malloc((1) * sizeof(char));
		string[u] = '\0';
	}
	else if (length - (start) > len)
	{
		string = (char *)malloc((len + 1) * sizeof(char));
		string = suber (s, start, len, string);
	}
	else
	{
		string = (char *)malloc((length - (start + 1) + 1) * sizeof(char));
		string = suber (s, start, length, string);
	}
	return (string);
}
