/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/15 23:48:21 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 00:11:08 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) : _x(0), _y(0)
{
	return ;
}

Point::Point(const Point &point) : _x(point._x), _y(point._y)
{
	return ;
}

Point::Point(const Fixed &fixedX, const Fixed &fixedY) : _x(fixedX), _y(fixedY)
{
	return ;
}

Point::~Point()
{
	return ;
}

Point &Point::operator=(const Point &point)	// x and y are const, cant be assigned
{
	(void)point;

	return (*this);
}

float	Point::signThree(const Point &a, const Point &b, const Point &c)
{
	Fixed	fixed;

	fixed = (a._x - c._x) * (b._y - c._y) - (b._x - c._x) * (a._y - c._y);
	return (fixed.toFloat());
}

float	Point::getX(void) const
{
	return (this->_x.toFloat());
}

float	Point::getY(void) const
{
	return (this->_y.toFloat());
}

std::ostream &operator<<(std::ostream &o, const Point &point)
{
	o << "(" << point.getX() << "," << point.getY() << ")";
	return (o);
}
