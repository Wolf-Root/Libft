/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yaboualk <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 10:46:28 by yaboualk          #+#    #+#             */
/*   Updated: 2026/10/24 11:48:07 by yaboualk         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*fstr;
	size_t	i;

	if (!s1 || !s2)
		return (NULL);
	fstr = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2) + 1));
	if (!fstr)
		return (NULL);
	i = 0;
	while (i < ft_strlen(s1))
	{
		fstr[i] = s1[i];
		i++;
	}
	i = 0;
	while (i < ft_strlen(s2))
	{
		fstr[ft_strlen(s1) + i] = s2[i];
		i++;
	}
	fstr[ft_strlen(s1) + ft_strlen(s2)] = '\0';
	return (fstr);
}
