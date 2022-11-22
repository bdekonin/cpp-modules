/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   main.cpp                                           :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/02/19 14:15:00 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/09/24 09:10:04 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "iter.hpp"

class Awesome
{
	public:
		Awesome(void) : _n(42)
		{
			return;
		}
		int get(void) const
		{
			return this->_n;
		}
	private:
		int _n;
};
std::ostream & operator<<(std::ostream & o, Awesome const & rhs )
{
	o << rhs.get();
	return o;
}

template< typename T>
void print(T const &x)
{
	std::cout << x << std::endl;
	return;
}

int main()
{

	int tab[] = { 0, 1, 2, 3, 4 };
	Awesome tab2[5];
	iter(tab, 5, print);
	iter(tab2, 5, print);
}
