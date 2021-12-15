/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   min.c                                              :+:    :+:            */
/*                                                     +:+                    */
/*   By: tbruinem <tbruinem@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/12/15 01:49:36 by tbruinem      #+#    #+#                 */
/*   Updated: 2021/12/15 01:49:40 by tbruinem      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "util.h"

int	ft_min(int x, int y)
{
	if (x <= y)
		return (x);
	return (y);
}
