/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/29 21:38:57 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/02/01 22:57:16 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	unsigned char	*src;
	unsigned char	ch;
	size_t			i;

	if (n <= 0)
		return (NULL);
	src = (unsigned char *)s;
	ch = (unsigned char) c;
	i = 0;
	while (i < n)
	{
		if (*src == ch)
			return (src);
		src++;
		i++;
	}
	return (NULL);
}
