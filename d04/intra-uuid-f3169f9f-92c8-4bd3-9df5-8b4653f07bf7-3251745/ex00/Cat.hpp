/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Cat.hpp                                            :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/08/30 11:35:39 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/18 15:52:32 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_HPP
# define CAT_HPP

# include "Animal.hpp"

class Cat : public Animal
{
	public:
		/* Constructor  */
		Cat();

		/* Destructor */
		virtual ~Cat();
		
		/* Copy constructor */
		Cat(const Cat &e);

		/* Operation overload = */
		Cat &operator = (const Cat &e);
	private:
		// ...
};

#endif // CAT_HPP