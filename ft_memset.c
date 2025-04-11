/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jaehlee <jaehlee@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/04/02 15:06:10 by jaehlee           #+#    #+#             */
/*   Updated: 2025/04/02 15:06:10 by jaehlee          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t num)
{
	unsigned char	*temp;
	size_t			i;

	temp = (unsigned char *) ptr;
	i = 0;
	while (i < num)
	{
		temp[i] = (unsigned char)value;
		i++;
	}
	return (temp);
}
