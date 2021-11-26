/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/09/20 08:14:45 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/11/26 10:37:56 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */


#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

# include <stack>
# include <iostream>
# include <exception>
# include <deque>
# include <list>

template<class T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		typedef typename container::iterator iterator;	
		typedef typename container::const_iterator const_iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;

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
		MutantStack&	operator=(const MutantStack<T> &obj)
		{
			this->c = obj.c;
			return (*this);
		}
		iterator begin()
		{
			return this->c.begin();
		}
		const_iterator begin() const
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
		const_iterator end() const
		{
			return this->c.end();
		}
		reverse_iterator rbegin()
		{
			return this->c.rbegin();
		}
		const_reverse_iterator rbegin() const
		{
			return this->c.rbegin();
		}
		reverse_iterator rend()
		{
			return this->c.rend();
		}
		const_reverse_iterator rend() const
		{
			return this->c.rend();
		}
	private:
		// ...
};

#endif // mutantstack_HPP