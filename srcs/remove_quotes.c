/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   remove_quotes.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: pcunha <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:56:55 by pcunha            #+#    #+#             */
/*   Updated: 2021/07/15 20:59:06 by pcunha           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

char *remove_quotes(char *str)
{
	char *clean_str;

	clean_str = ft_strtrim(str, "\"");
	return clean_str;
}

