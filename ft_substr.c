/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: achan-my <achan-my@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/08 18:49:18 by achan-my          #+#    #+#             */
/*   Updated: 2025/09/10 10:48:51 by achan-my         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	size_t	slen;
	char	*sub;
	size_t	copy_len;

	i = 0;
	if (!s)
		return (NULL);
	slen = ft_strlen(s);
	if (start >= slen)
		return (ft_strdup(""));
	if (len > slen - start)
		copy_len = slen - start;
	else
		copy_len = len;
	sub = malloc(copy_len + 1);
	if (!sub)
		return (NULL);
	while (i < copy_len)
	{
		sub[i] = s[start + i];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}

/*int main()
{
    char a[] = "Hello World";
    int b = 0;
    int c = 5;

    char *result = ft_substr(a,b,c);
    printf("%s", result);
    free(result);
}*/
