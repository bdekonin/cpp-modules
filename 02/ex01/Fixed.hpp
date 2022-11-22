/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 13:48:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 17:47:51 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	public:
		/* Constructor  */
		Fixed();
		Fixed(const int n);
		Fixed(const float n);
		

		/* Destructor */
		virtual ~Fixed();

		/* Copy constructor */
		Fixed(const Fixed&);

		/* Operation overload = */
		Fixed& operator = (const Fixed& e);

		// Methods
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

// << overload
std::ostream& operator<<(std::ostream &os, const Fixed &f);

#endif // FIXED_HPP