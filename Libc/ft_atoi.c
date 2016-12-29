/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/17 15:28:48 by sait-ben          #+#    #+#             */
/*   Updated: 2016/11/19 18:35:39 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *s)
{
	int i;
	int a;
	int b;

	i = 0;
	a = 1;
	b = 0;
	while (s[i] == '\n' || s[i] == '\b' || s[i] == '\t' ||
			s[i] == '\v' || s[i] == '\f' || s[i] == '\r' || s[i] == ' ')
		i++;
	if (s[i] == '-')
		a = -1;
	if (s[i] == '+' || s[i] == '-')
		i++;
	while (s[i] >= 48 && s[i] <= 57)
	{
		b = b * 10 + s[i] - 48;
		i++;
	}
	return (a * b);
}