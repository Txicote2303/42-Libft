/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 23:41:25 by frcarval          #+#    #+#             */
/*   Updated: 2021/10/28 08:35:07 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*joiner(char const *s1, char const *s2, char *string)
{
	int	i;
	int	u;

	i = 0;
	u = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	while (s2[u] != '\0')
	{
		string[i] = s2[u];
		i++;
		u++;
	}
	string[i] = '\0';
	return (string);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*string;
	int		i;

	if (!s1 && !s2)
		return (NULL);
	string = (char *)malloc
		((ft_strlen(s1) + ft_strlen(s2) + 1) * sizeof(char));
	return (joiner(s1, s2, string));
}
