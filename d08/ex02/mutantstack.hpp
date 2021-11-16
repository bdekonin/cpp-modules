/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 08:14:45 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/11/16 13:09:36 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <exception>
# include <deque>

template<class T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		typedef typename container::iterator iterator;	

		MutantStack()
		{
		}
		MutantStack(const MutantStack &obj)
		{
			*this = obj;
		}
		virtual ~MutantStack()
		{
		}
		MutantStack&	operator=(MutantStack<T> &obj)
		{
			this->c = obj.c;
			return (*this);
		}
		typename container::iterator begin()
		{
			return this->c.begin();
		}
		typename container::iterator end()
		{
			return this->c.end();
		}
	private: 
		// ...
};

#endif // mutantstack_HPP
