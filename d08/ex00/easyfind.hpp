/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   easyfind.hpp                                       :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/02 15:22:55 by bdekonin      #+#    #+#                 */
<<<<<<< HEAD
/*   Updated: 2021/11/15 10:35:43 by bdekonin      ########   odam.nl         */
=======
/*   Updated: 2021/10/28 12:26:57 by bdekonin      ########   odam.nl         */
>>>>>>> 1f4d0195916f73bb1c4c4b97bfdd430d5e4781a2
/*                                                                            */
/* ************************************************************************** */

#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>

template <typename T>
int	easyfind(T &container, int num)
{
	typename T::iterator it = std::find(container.begin(), container.end(), num);
	if (it == container.end())
		throw std::exception();
	return (*it);
}

#endif // EASYFIND_HPP
