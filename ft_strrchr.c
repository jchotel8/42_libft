/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jchotel <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/11/04 23:06:03 by jchotel           #+#    #+#             */
/*   Updated: 2019/11/18 15:02:58 by jchotel          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	index;
	int	s_len;

	s_len = 0;
	while (s[s_len])
		s_len++;
	index = s_len;
	if (s[index] == c)
		return ((char *)&s[index]);
	while (index >= 0)
	{
		if (s[index] == c)
			return ((char *)&s[index]);
		index--;
	}
	return (0);
}
