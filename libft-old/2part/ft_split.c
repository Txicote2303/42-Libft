/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/06 05:13:51 by frcarval          #+#    #+#             */
/*   Updated: 2021/11/07 21:16:40 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

int	runner(char const *s, char c)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
			if (s[i - 1] != s[i])
				u++;
		i++;
	}
	return (u);
}

char	**ft_split(char const *s, char c)
{
	int		j;
	int		v;
	int		i;
	char	**div;

	if (!s)
		return (NULL);
	div = malloc(sizeof(char *) * (runner(s, c) + 1));
	i = 0;
	j = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c && s[i] != '\0')
			i++;
		if (!s[i])
			break ;
		v = i;
		while (s[i] != c && s[i] != '\0')
			i++;
		div[j] = ft_substr(s, v, i - v);
		j++;
	}
	div[j] = NULL;
	return (div);
}
