/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 14:12:17 by frcarval          #+#    #+#             */
/*   Updated: 2021/10/25 01:29:09 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char		*sc;
	size_t		i;

	sc = (char *)s;
	i = -1;
	while (++i < n)
		if (*(sc + i) == (char)c)
			return ((void *)sc + i);
	return (NULL);
}
