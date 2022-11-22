/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Fixed.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/22 13:48:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/22 17:48:53 by bdekonin      ########   odam.nl         */
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

		/* Operation overloaders */
		bool	operator > (const Fixed& cmp) const;
		bool	operator < (const Fixed& cmp) const;
		bool	operator >= (const Fixed& cmp) const;
		bool	operator <= (const Fixed& cmp) const;
		bool	operator == (const Fixed& cmp) const;
		bool	operator != (const Fixed& cmp) const;

		Fixed	operator + (const Fixed& cmp) const;
		Fixed	operator - (const Fixed& cmp) const;
		Fixed	operator * (const Fixed& cmp) const;
		Fixed	operator / (const Fixed& cmp) const;

		Fixed&	operator ++ (void);
		Fixed	operator ++ (int);
		Fixed&	operator -- (void);
		Fixed	operator -- (int);


		// Methods
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat(void) const;
		int		toInt(void) const;
		static Fixed &min(Fixed &a, Fixed &b);
		static const Fixed &min(const Fixed &a, const Fixed &b);
		static Fixed &max(Fixed &a, Fixed &b);
		static const Fixed &max(const Fixed &a, const Fixed &b);
	private:
		int					_fixedPointValue;
		static const int	_fractionalBits = 8;
};

// << overload
std::ostream& operator<<(std::ostream &os, const Fixed &f);

#endif // FIXED_HPP