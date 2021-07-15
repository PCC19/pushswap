/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 21:32:13 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/15 21:33:03 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static char	**perform_splits(int n, int j, char s[])
{
	int		i;
	char	**out;

	out = (char **)safe_malloc(sizeof(char *) * (j + 2));
	out[0] = ft_strdup(&s[0]);
	i = 0;
	j = 0;
	while (i < n)
	{
		if (s[i] == 0)
		{
			j++;
			out[j] = ft_strdup(&s[i + 1]);
		}
		i++;
	}
	return (out);
}

char	**ft_split(char s[], char c)
{
	int					i;
	int					j;
	char				**out;

	i = 0;
	j = 0;
	while (s[i] != 0)
	{
		if (s[i] == c)
		{
			s[i] = 0;
			j++;
		}
		i++;
	}
	out = perform_splits(i, j, s);
	j++;
	out[j] = NULL;
	return (out);
}
