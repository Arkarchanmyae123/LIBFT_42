/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achan-my <achan-my@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:47:43 by achan-my          #+#    #+#             */
/*   Updated: 2025/09/10 10:01:38 by achan-my         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dlen;
	size_t	slen;
	size_t	i;

	dlen = ft_strlen(dst);
	slen = ft_strlen(src);
	i = 0;
	if (size <= dlen)
		return (size + slen);
	while (src[i] && (dlen + i + 1) < size)
	{
		dst[dlen + i] = src[i];
		i++;
	}
	dst[dlen + i] = '\0';
	return (dlen + slen);
}

/*int main()
{
    char d[30]; memset(d, 0, 30);
    char s[] = "AAAAAAAAA";
	//d[0] = 'B';
    printf("string_len = %zu\n", ft_strlen(s));
    //printf("%d\n", sizeof(d));
    printf("%zu\n", ft_strlcat(d,s, 0));
    printf("%s", d);
}*/
