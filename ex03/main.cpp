/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:58:40 by lle-briq          #+#    #+#             */
/*   Updated: 2022/03/23 17:22:27 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static std::string	boolToString(bool b)
{
	if (b)
		return ("true");
	return ("false");
}

int	main(void)
{
	Point	a(0, 0);
	Point	b(10, 0);
	Point	c(0, 5);
	Point	p1(1, 1);
	Point	p2(10, 5);

	std::cout << "a" << a << "  b" << b << "  c" << c << std::endl;
	std::cout << "Is p1" << p1 << " in (a,b,c) ? " << boolToString(bsp(a, b, c, p1)) << std::endl;
	std::cout << "Is p2" << p2 << " in (a,b,c) ? " << boolToString(bsp(a, b, c, p2)) << std::endl;
	std::cout << "Is a" << a << " in (a,b,c) ? " << boolToString(bsp(a, b, c, a)) << std::endl;
	return (0);
}
