/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atol.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vaguayo- <vaguayo-@student.42barcelona.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/01/14 12:53:42 by vaguayo-          #+#    #+#             */
/*   Updated: 2026/01/19 10:10:46 by vaguayo-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "pushswap.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || (c >= '\t' && c <= '\r'));
}

static void	check_overflow(long res)
{
	if (res < INT_MIN || res > INT_MAX)
	{
		write(2, "Error\n", 6);
		exit(1); // Leaks, no liberas nada al salir forzosamente
	}
}

long	ft_atol(const char *str)
{
	int		i;
	int		sign;
	long	res;

	i = 0;
	sign = 1;
	res = 0;
	while (ft_isspace(str[i])) // Incrementa str directamente en vez de incrementar i
		i++;
	if (str[i] == '+' || str[i] == '-')
		if (str[i++] == '-') // Incrementa str!!!
			sign = -1;
	while (str[i] >= '0' && str[i] <= '9')
		res = res * 10 + (str[i++] - '0');
	res *= sign;
	// Comprueba de haber leido minimo un digito comprobando que i != 0, comprueba que hayas parseado toda la string comprobando
	// que hayas llegado al null byte en str. Comprueba estar en el rango num >= INT_MIN && num <= INT_MAX, indica error retornando un
	// valor especifico o asignando 1 a un puntero recibido
	check_overflow(res); // <-- Sobra, puedes comprobar en una linea todo
	return (res);
}
