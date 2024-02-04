/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 21:19:40 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/31 21:25:32 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	unsigned int	i;
	unsigned int	l;
	char			*sm;

	if (!s)
		return (0);
	l = (unsigned int)ft_strlen((char *)s);
	sm = (char *)malloc(sizeof(char) * (l + 1));
	if (!sm)
		return (NULL);
	i = 0;
	while (i < l)
	{
		sm[i] = f(i, s[i]);
		i++;
	}
	sm[i] = '\0';
	return (sm);
}
