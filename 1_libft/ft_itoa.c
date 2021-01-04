/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: seuan <seuan@student.42seoul.kr>           +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/12/27 23:46:50 by seuan             #+#    #+#             */
/*   Updated: 2020/12/28 18:18:31 by seuan            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		num_counter(int n)
{
	int	cnt;

	cnt = 1;
	if (-21483648 < n && n < 0)
		n *= -1;
	else if (n == -2147483648)
	{
		cnt++;
		n = 147483648;
	}
	while (n >= 10)
	{
		cnt++;
		n /= 10;
	}
	return (cnt);
}

char	*positive_num(int n, int n_cnt)
{
	char	*str;

	str = (char *)malloc(sizeof(char) * (n_cnt + 1));
	if (!str)
		return (NULL);
	str[n_cnt] = '\0';
	while (n_cnt--)
	{
		str[n_cnt] = (n % 10) + '0';
		n /= 10;
	}
	return (str);
}

char	*ft_itoa(int n)
{
	int				n_cnt;
	unsigned int	num;
	char			*str;

	n_cnt = num_counter(n);
	if (n < 0)
	{
		str = (char *)malloc(sizeof(char) * (n_cnt + 2));
		if (!str)
			return (NULL);
		num = n * -1;
		str[n_cnt + 1] = '\0';
		while (n_cnt)
		{
			str[n_cnt] = (num % 10) + '0';
			num /= 10;
			n_cnt--;
		}
		str[0] = '-';
		return (str);
	}
	return (positive_num(n, n_cnt));
}
