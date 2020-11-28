/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:11:28 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/23 19:51:13 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *strb, int c)
{
	size_t i;

	i = 0;
	while (strb[i])
	{
		if (strb[i] == (char)c)
			return (char *)&(strb[i]);
		i++;
	}
	if (strb[i] == (char)c)
		return (char *)&(strb[i]);
	return (0);
}
