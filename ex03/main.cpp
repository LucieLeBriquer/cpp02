/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:58:40 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/17 18:56:17 by lle-briq         ###   ########.fr       */
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
	Point	a(Fixed(0), Fixed(0));
	Point	b(Fixed(10), Fixed(0));
	Point	c(Fixed(0), Fixed(5));
	Point	p1(Fixed(1), Fixed(1));
	Point	p2(Fixed(10), Fixed(5));

	std::cout << "a" << a << "  b" << b << "  c" << c << std::endl;
	std::cout << "Is p1" << p1 << " in (a,b,c) ? " << boolToString(bsp(a, b, c, p1)) << std::endl;
	std::cout << "Is p2" << p2 << " in (a,b,c) ? " << boolToString(bsp(a, b, c, p2)) << std::endl;
	std::cout << "Is a" << a << " in (a,b,c) ? " << boolToString(bsp(a, b, c, a)) << std::endl;
	return (0);
}
