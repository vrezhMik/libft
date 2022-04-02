/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/01 13:26:29 by vmikayel          #+#    #+#             */
/*   Updated: 2022/04/01 13:26:45 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*setmalloc(char *s, int t, int z)
{
	int				j;
	unsigned int	n;

	j = 0;
	if (z < 0)
	{
		n = z * -1;
		s[j] = '-';
	}
	else
		n = z;
	s[t] = '\0';
	if (n == 0)
		s[j] = '0';
	while (n > 0)
	{
		s[t - j - 1] = n % 10 + '0';
		n /= 10;
		j++;
	}
	return (s);
}

char	*ft_itoa(int n)
{
	char			*s;
	unsigned int	k;
	int				t;

	t = 0;
	if (n < 0)
	{
		t++;
		k = n * -1;
	}
	else
		k = n;
	while (k > 0)
	{
		k = k / 10;
		t++;
	}
	if (n == 0)
		t++;
	s = (char *)malloc((t + 1) * sizeof(char));
	if (!s)
		return (NULL);
	s = setmalloc(s, t, n);
	return (s);
}
