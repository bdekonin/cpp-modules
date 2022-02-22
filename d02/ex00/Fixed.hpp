/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 13:13:46 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 13:50:13 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>

class Fixed
{
	public:
		/* Constructor  */
		Fixed();

		/* Destructor */
		virtual ~Fixed();

		/* Copy constructor */
		Fixed(const Fixed&);

		/* Operation overload = */
		Fixed& operator = (const Fixed& e);

		// Methods
		int getRawBits( void ) const;
		void setRawBits( int const raw );
	private:
		int						_fixedPointValue;
		static const int		_fractionalBits = 8;
};

#endif // FIXED_HPP