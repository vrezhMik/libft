/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/28 13:54:13 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/28 15:01:41 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_bzero(void *dest, size_t n)
{
	size_t			i;
	unsigned char	*s;

	s = dest;
	i = 0;
	while (i != n)
	{
		s[i] = '\0';
		i++;
	}
	return (s = dest);
}
