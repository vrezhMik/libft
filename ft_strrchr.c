/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vrmikaye <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/31 20:30:01 by vrmikaye          #+#    #+#             */
/*   Updated: 2024/01/31 20:30:38 by vrmikaye         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int		i;
	char	*str;

	str = (char *)s;
	c = (char)c;
	i = ft_strlen(str);
	while (i > -1)
	{
		if (str[i] == c)
			return (&str[i]);
		i--;
	}
	return (NULL);
}
