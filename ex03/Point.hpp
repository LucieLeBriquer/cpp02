/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/16 00:17:05 by lle-briq          #+#    #+#             */
/*   Updated: 2021/12/16 00:24:04 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

class Point
{
	private:
		const Fixed	_x;
		const Fixed	_y;

	public:
		Point(void);
		Point(const Point &point);
		Point(const Fixed &fixedX, const Fixed &fixedY);
		~Point();

		float	getX(void) const;
		float	getY(void) const;
		Point &operator=(const Point &point);
		static float	signThree(const Point &a, const Point &b, const Point &c);
};

std::ostream &operator<<(std::ostream &o, const Point &point);
