/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 17:59:44 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/15 22:24:26 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

static void	printTitle(std::string title)
{
	std::string	toPrint;
	int	size = 40;
	int	n;

	toPrint = " " + title + " ";
	n = toPrint.size();
	if (n > size)
	{
		toPrint = toPrint.substr(0, size - 2);
		toPrint[size - 4] = '.';
		toPrint[size - 3] = ' ';
		n = toPrint.size();
	}
	std::cout << std::endl << std::setfill('=') << std::setw(size) << "" << std::endl;
	std::cout << std::setw(size / 2) << toPrint.substr(0, n / 2);
	std::cout << toPrint.substr(n / 2, n);
	std::cout << std::setfill('=') << std::setw(size / 2 - n + n / 2) << "" << std::endl;
	std::cout << std::setfill('=') << std::setw(size) << "" << std::endl;

}

static std::string	boolToString(bool b)
{
	if (b)
		return ("true");
	return ("false");
}

static void	testComparison()
{
	Fixed	a(6.95f);
	Fixed	b(7);

	printTitle("COMPARISONS");
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a > b ? " << boolToString(a > b) << std::endl;
	std::cout << "  a < b ? " << boolToString(a < b) << std::endl;
	std::cout << "  a >= b ? " << boolToString(a >= b) << std::endl;
	std::cout << "  a <= b ? " << boolToString(a <= b) << std::endl;
	std::cout << "  a == b ? " << boolToString(a == b) << std::endl;
	std::cout << "  a != b ? " << boolToString(a != b) << std::endl;
	b = a;
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a > b ? " << boolToString(a > b) << std::endl;
	std::cout << "  a < b ? " << boolToString(a < b) << std::endl;
	std::cout << "  a >= b ? " << boolToString(a >= b) << std::endl;
	std::cout << "  a <= b ? " << boolToString(a <= b) << std::endl;
	std::cout << "  a == b ? " << boolToString(a == b) << std::endl;
	std::cout << "  a != b ? " << boolToString(a != b) << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "  a > a ? " << boolToString(a > a) << std::endl;
	std::cout << "  a < a ? " << boolToString(a < a) << std::endl;
	std::cout << "  a >= a ? " << boolToString(a >= a) << std::endl;
	std::cout << "  a <= a ? " << boolToString(a <= a) << std::endl;
	std::cout << "  a == a ? " << boolToString(a == a) << std::endl;
}

static void	testArithmetic()
{
	Fixed	a(6.95f);
	Fixed	b(7);

	printTitle("ARITHMETIC");
	std::cout << "a = " << a << "  b = " << b << std::endl;
	std::cout << "  a + b = " << a + b << std::endl;
	std::cout << "  a + a = " << a + a << std::endl;
	std::cout << "  a - b = " << a - b << std::endl;
	std::cout << "  a * b = " << a * b << std::endl;
	std::cout << "  a / b = " << a / b << std::endl;
}

static void	testIncrement()
{
	Fixed	a(1);

	printTitle("INCREMENT");
	std::cout << "a++ = " << a++ << std::endl;
	std::cout << "a = " << a << std::endl;
	std::cout << "++a = " << ++a << std::endl;
}

int	main(void)
{
	testComparison();
	testArithmetic();
	testIncrement();
	return (0);
}
