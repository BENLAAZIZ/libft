/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:23 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/19 19:23:37 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek_set(char const *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (set[i] == c)
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	i;
	size_t	len_s1;
	size_t	j;
	char	*tab;

	if (s1 == NULL) 
		return (NULL);
	if (set == NULL)
		return (ft_strdup(s1));
	len_s1 = ft_strlen(s1);
	while (len_s1 > 0 && chek_set(set, s1[len_s1 - 1]))
		len_s1--;
	i = 0;
	while (s1[i] != '\0' && chek_set(set, s1[i]))
		i++;
	j = len_s1 - i + 1;
	tab = (char *)malloc(j + 1);
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (i < len_s1)
		tab[j++] = s1[i++];
	tab[j] = '\0';
	return (tab);
}
// #include <stdio.h>
// int main()
// {
// 	printf("|%s|", ft_strtrim("", "sfsfs"));
// }
