/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achan-my <achan-my@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:39:44 by achan-my          #+#    #+#             */
/*   Updated: 2025/09/08 18:39:44 by achan-my         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	size_t			total;
	size_t			i;
	unsigned char	*ptz;

	i = 0;
	total = count * size;
	ptz = malloc(total);
	if (ptz == NULL)
	{
		return (NULL);
	}
	if (size != 0 && count > SIZE_MAX / size)
	{
		return (NULL);
	}
	while (i < total)
	{
		ptz[i] = 0;
		i++;
	}
	return ((void *)ptz);
}
