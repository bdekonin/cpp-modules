/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   Human.hpp                                          :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/28 15:36:07 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/28 20:18:11 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMAN_HPP
# define HUMAN_HPP

# include "Brain.hpp"

class Human
{
	public:
		Human(void);
		~Human(void);
		Brain getBrain(void);
		std::string identify(void);

	private:
		Brain m_brain;
};

#endif