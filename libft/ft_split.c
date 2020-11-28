/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dhakon <dhakon@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/11/17 22:03:55 by dhakon            #+#    #+#             */
/*   Updated: 2020/11/25 14:12:42 by dhakon           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static	int		words_count(char const *s, char c)
{
	int i;
	int word;

	i = 0;
	word = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word++;
			while (s[i] != c && s[i] != '\0')
				i++;
		}
		else if (s[i] == c)
			i++;
	}
	return (word);
}

static	char	**freearray(char **space)
{
	int i;

	i = 0;
	while (space[i])
	{
		free(space[i]);
		i++;
	}
	free(space);
	return (NULL);
}

char			**ft_split(char const *s, char c)
{
	int		count;
	int		start;
	int		strnmb;
	char	**space;

	count = 0;
	strnmb = 0;
	if (!s)
		return (NULL);
	if (!(space = (char**)ft_calloc(sizeof(char *), (words_count(s, c) + 1))))
		return (NULL);
	while (s[count] != '\0')
	{
		while (s[count] == c)
			count++;
		start = count;
		while (s[count] && s[count] != c)
			count++;
		if (count > start)
			if (!(space[strnmb++] = ft_substr(s, start, count - start)))
				return (freearray(space));
	}
	space[strnmb] = NULL;
	return (space);
}
