/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/04 17:01:45 by jaehlee           #+#    #+#             */
/*   Updated: 2025/04/04 17:01:45 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	l;

	if (!s)
		return (0);
	if ((unsigned int)(ft_strlen(s)) < start)
		return (ft_strdup(""));
	if ((unsigned int)ft_strlen(s) > len)
		l = len;
	else
		l = ft_strlen(s);
	str = (char *)malloc(sizeof(char) * (l + 1));
	if (!str)
		return (0);
	if (l == 0)
		str[0] = 0;
	else
		ft_strlcpy(str, s + start, l + 1);
	return (str);
}
