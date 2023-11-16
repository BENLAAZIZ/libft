/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 16:00:23 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/15 15:27:01 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	chek_set(char const *set, char c )
{
	size_t	i;

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
	size_t	len_tab;
	size_t	j;
	char	*tab;

	if (set == NULL || s1 == NULL)
		return (ft_strdup((char *)s1));
	len_s1 = ft_strlen(s1) - 1;
	while (len_s1 > 0 && chek_set(set, s1[len_s1]))
		len_s1--;
	i = 0;
	while (i < len_s1 + 1 && chek_set(set, s1[i]))
		i++;
	len_tab = len_s1 - i + 1;
	tab = (char *)malloc(len_tab + 1);
	if (tab == NULL)
		return (NULL);
	j = 0;
	while (i < len_s1 + 1)
		tab[j++] = s1[i++];
	tab[j] = '\0';
	return (tab);
}
