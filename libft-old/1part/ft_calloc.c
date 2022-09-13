/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/23 18:49:45 by frcarval          #+#    #+#             */
/*   Updated: 2021/10/25 01:43:57 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	char	*string;
	int		i;

	i = 0;
	string = (char *)malloc(count * size);
	while (i < count)
	{
		string [i] = 0;
		i++;
	}
	return (string);
}
