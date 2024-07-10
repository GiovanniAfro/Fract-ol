/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   error_msg.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gcavanna <gcavanna@student.42firenze.it    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/28 21:27:18 by gcavanna          #+#    #+#             */
/*   Updated: 2023/03/27 19:05:10 by gcavanna         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fractol.h"

int	error_msg(void)
{
	ft_printf("\nmandelbrot/burningship: ./fractol fractal\n\n");
	ft_printf("julia: ./fractol julia x y coordinates (x and y ");
	ft_printf("being complex numbers between -1.999 and 1.999)\n\n");
	ft_printf("Available fractals: mandelbrot, julia, burningship\n\n");
	return (0);
}
