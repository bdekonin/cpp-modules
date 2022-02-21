/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   MateriaSource.hpp                                  :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2022/02/17 19:39:25 by bdekonin      #+#    #+#                 */
/*   Updated: 2022/02/19 17:26:19 by bdekonin      ########   odam.nl         */
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
		MateriaSource();

		/* Destructor */
		virtual ~MateriaSource();

		/* Copy constructor */
		MateriaSource(const MateriaSource &e);

		/* Operation overload = */
		MateriaSource& operator = (const MateriaSource& rhs);

		// Methods
		void learnMateria(AMateria *m);
		AMateria *createMateria(std::string const & type);
	private:
		AMateria* _materia[4];
};

#endif // MATERIASOURCE_HPP