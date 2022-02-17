/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: lle-briq <lle-briq@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:30:36 by lle-briq          #+#    #+#             */
/*   Updated: 2022/02/17 18:09:08 by lle-briq         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP
# include <iostream>

class Fixed
{
	private:
		int					_pf;
		static const int	_nbFrac = 8;

	public:
		Fixed(void);
		Fixed(const Fixed &fixed);
		~Fixed();
		Fixed	&operator=(const Fixed&fixed);
		
		int		getRawBits(void) const;
		void	setRawBits(const int raw);
};

#endif
