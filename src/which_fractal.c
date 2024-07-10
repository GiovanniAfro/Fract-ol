/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   which_fractal.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/17 19:23:29 by gcavanna          #+#    #+#             */
/*   Updated: 2023/03/27 19:06:24 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	which_fractal(char *fractal)
{
	if (!ft_strncmp(fractal, "mandelbrot", ft_strlen(fractal)))
		return (1);
	else if (!ft_strncmp(fractal, "julia", ft_strlen(fractal)))
		return (2);
	else if (!ft_strncmp(fractal, "burningship", ft_strlen(fractal)))
		return (3);
	return (0);
}
