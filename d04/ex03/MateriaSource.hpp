/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 19:39:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/17 21:12:53 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef MATERIASOURCE_HPP
# define MATERIASOURCE_HPP

# include "IMateriaSource.hpp"
# include "AMateria.hpp"

class MateriaSource : public IMateriaSource
{
	public:
		/* Constructor  */
		MateriaSource()
		{
		}

		/* Destructor */
		virtual ~MateriaSource()
		{
			for (int i = 0; i < 4; i++)
				delete _materia[i];
		}

		/* Copy constructor */
		MateriaSource(const MateriaSource &e)
		{
			*this = e;
		}

		/* Operation overload = */
		MateriaSource& operator = (const MateriaSource& rhs)
		{
			for (int i = 0; i < 4; i++)
			{
				delete _materia[i];
				if (rhs._materia[i])
					_materia[i] = rhs._materia[i]->clone();
				else
					_materia[i] = NULL;
			}
			return *this;
		}

		// Methods
		void learnMateria(AMateria *m)
		{
			for (int i = 0; i < 4; i++)
			{
				if (!this->_materia[i])
				{
					this->_materia[i] = m->clone();
					break ;
				}
			}
		}
		AMateria *createMateria(std::string const & type)
		{
			for (int i = 0; i < 4; i++)
			{
				if (this->_materia[i] && this->_materia[i]->getType() == type)
					return this->_materia[i]->clone();
			}
			return NULL;
		}
	private:
		AMateria* _materia[4];
};

#endif // MATERIASOURCE_HPP