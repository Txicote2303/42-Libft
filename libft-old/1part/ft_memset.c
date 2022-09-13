/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frcarval <xicoleite23@gmail.com>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/21 13:51:53 by frcarval          #+#    #+#             */
/*   Updated: 2021/10/23 18:45:00 by frcarval         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../libft.h"

void	*ft_memset(void	*b, int c, size_t len)
{
	int				i;
	unsigned char	*k;

	i = 0;
	k = (unsigned char *)b;
	while (i < (int)len)
		k[i++] = (unsigned char)c;
	return (b);
}
