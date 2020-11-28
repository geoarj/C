/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/10/28 22:35:26 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/25 16:38:22 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, char *src, size_t srclen)
{
	size_t len;

	if (!src)
		return (0);
	len = ft_strlen(src);
	if (len + 1 < srclen)
	{
		ft_memcpy(dst, src, len + 1);
	}
	else if (srclen != 0)
	{
		ft_memcpy(dst, src, srclen - 1);
		dst[srclen - 1] = '\0';
	}
	return (len);
}
