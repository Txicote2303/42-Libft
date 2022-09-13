/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 19:57:40 by frcarval          #+#    #+#             */
/*   Updated: 2021/10/25 02:04:44 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

char	*ft_strdup(const	char *s1)
{
	char	*string;
	int		i;

	i = 0;
	while (s1[i] != '\0')
		i++;
	string = (char *)malloc((sizeof(char) * i) + 1);
	i = 0;
	while (s1[i] != '\0')
	{
		string[i] = s1[i];
		i++;
	}
	string[i] = '\0';
	return (string);
}
