/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 16:13:19 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/16 16:29:22 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	res;

	res = count * size;
	if (count != 0 && (res / count != size))
		return NULL;
	p = malloc((count * size));
	if (p == NULL)
		return (NULL);
	ft_memset(p, 0, count * size);
	return (p);
}
