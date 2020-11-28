/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/08 20:23:38 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/23 18:09:02 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *strb, int c)
{
	int i;

	i = ft_strlen((char *)strb);
	while (i >= 0)
	{
		if (strb[i] == c)
			return (char *)&(strb[i]);
		i--;
	}
	return (0);
}
