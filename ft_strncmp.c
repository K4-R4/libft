/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkuramot <tkuramot@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/16 21:30:19 by tkuramot          #+#    #+#             */
/*   Updated: 2023/05/16 21:47:33 by tkuramot         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stddef.h>

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
    while(n > 0 && *s1 != '\0' && (*s1 == *s2))
    {
        s1++;
        s2++;
        n--;
    }
    if(n == 0)
        return (0);
    return (unsigned char)*s1 - (unsigned char)*s2;
}