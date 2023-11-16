/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hben-laz <hben-laz@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 22:21:22 by hben-laz          #+#    #+#             */
/*   Updated: 2023/11/15 22:22:52 by hben-laz         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int count_words(char const *s, char c)
{
    int len = 0;
    int i =0;
    if(s[0] == c)
      len  = 0;
    if(s[0] == '\0')
      return (0);
    if(s[0] != c)
        len++;
    i = 1;
    while(s[i])
    {
        if(s[i - 1] == c && s[i] != c)
          len++;
        i++;  
    }
    return (len);
}
char *ft_charge(char const *s,int start, int size)
{
    char *tab = malloc(size + 1);
    if(!tab)
     return (NULL);
    int i =0;
    while(i < size)
    {
        tab[i] = s[start + i];
        i++;
    }
    tab[i] = '\0';
    return  (tab);
}

char **ft_split(char const *s, char c)
{
    char **array;
    int size = count_words(s,c);
    array = (char **)malloc(sizeof(char *) * (size + 1));
    if(!array)
       return (NULL);

    int i = 0;
    int j = 0;
    int k = 0;
    while(i < size)
    {
        while(s[j] && s[j] == c)
            j++;
        k = j;    
        while(s[k] != c && s[k])
           k++; 
        k--;   
        array[i] = ft_charge(s, j, k - j + 1);
        if(!array[i])
        {
            while(i)
            {
                i--;
                free(array[i]);
            }
            free(array);
            return (0);
        }
        j = k + 1;
        i++;
    }
    array[i] = 0;
    return (array);
}
// int main()
// {
     
//     const char *s = "---ayoub----ben----hamza--hhhh----hdhdh-sdhdshhds-sdjdjsf";
//     char **array = ft_split(s,'-');

//     while(*array)
//     {
//         printf("%s\n",*array);
//         array++;
//     }
//     return (0);
// }


// *s = "---ayoub----ben----hamza--"
//       0123456789
