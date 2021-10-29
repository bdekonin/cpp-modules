/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   mutantstack.hpp                                    :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2021/10/29 09:28:18 by bdekonin      #+#    #+#                 */
/*   Updated: 2021/10/29 13:48:54 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MUTANTSTACK_HPP
# define MUTANTSTACK_HPP

// # include <iostream>
# include <stack>
# include <deque>

# define RESET			"\033[0m"
# define RED			"\033[31m"				/* Red */
# define GREEN			"\033[32m"				/* Green */
# define YELLOW			"\033[33m"				/* Yellow */
# define BLUE			"\033[34m"				/* Blue */
# define MAGENTA		"\033[35m"				/* Magenta */
# define CYAN			"\033[36m"				/* Cyan */

/*
** https://en.cppreference.com/w/cpp/container/stack
*/

template <typename T, class container = std::deque<T> >
class MutantStack : public std::stack<T, container>
{
	public:
		// typedef typename container::iterator iterator;
		typedef typename container::iterator iterator;
		typedef typename container::const_iterator const_iterator;
		typedef typename container::reverse_iterator reverse_iterator;
		typedef typename container::const_reverse_iterator const_reverse_iterator;


		/* Constructor */
		MutantStack()
		{
		}

		/* Copy constructor */
		MutantStack<T>(MutantStack const &src)
		{
			*this = src;
		}

		/* Destructor */
		virtual ~MutantStack<T>(void)
		{
		}

		/* Operation overload = */
		MutantStack const &operator=(MutantStack const &rhs)
		{
			*this = rhs; return *this;
		}

		iterator begin(void)
		{
			return this->c.begin();
		}
		iterator end(void)
		{
			return this->c.end();
		}
};

#endif // MUTANTSTACK_HPP