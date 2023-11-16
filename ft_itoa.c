/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 15:47:31 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/14 21:53:06 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	len_nbr(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

static int	sign(int n)
{
	int	len;

	len = 0;
	if (n < 0)
		len += len_nbr(n) + 1;
	else
		len += len_nbr(n);
	return (len);
}

char	*ft_itoa(int n)
{
	char		*string;
	int			size;
	long long	l;

	l = (long long)n;
	size = sign(n);
	string = (char *)malloc(sizeof(char) * (size + 1));
	if (string == NULL)
		return (NULL);
	string[size] = '\0';
	if (n < 0)
	{
		string[0] = '-';
		l = (long long)n * -1;
	}
	else if (n > 0)
		string[size] = '\0';
	else
		string[0] = 48;
	while (size && l)
	{
		string[--size] = l % 10 + '0';
		l = l / 10;
	}
	return (string);
}
