/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atilegen <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/03/21 17:21:37 by atilegen          #+#    #+#             */
/*   Updated: 2018/03/25 19:47:14 by atilegen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int i;
	int len;

	len = 0;
	i = 0;
	while (s[i])
	{
		i++;
		len++;
	}
	i = 0;
	while (len >= i)
	{
		if (s[len] == c)
			return ((char *)(s + len));
		len--;
	}
	return (0);
}
