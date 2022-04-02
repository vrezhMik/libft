/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vmikayel <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/18 11:22:57 by vmikayel          #+#    #+#             */
/*   Updated: 2022/03/18 11:24:29 by vmikayel         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int num)
{
	if ((num >= 48 && num <= 57) || (num >= 65 && num <= 90)
		|| (num >= 97 && num <= 122))
		return (1);
	return (0);
}
