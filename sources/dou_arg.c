/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dou_arg.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sait-ben <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/02/06 12:39:53 by sait-ben          #+#    #+#             */
/*   Updated: 2017/02/15 12:23:16 by sait-ben         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

char	*dou_arg(va_list ap, char c, t_options *opt)
{
	(void)ap;
	if (c == 'D')
		c = 'd';
	if (c == 'O')
		c = 'o';
	if (c == 'U')
		c = 'u';
	opt->taille = 3;
	return (int_arg(ap, c, opt));
}
