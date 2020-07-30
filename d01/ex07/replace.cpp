/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:56:50 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/30 09:31:30 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

Replace::Replace(char **argv)
{
	this->m_filename = (argv[1]);
	this->m_replaceFrom = (argv[2]);
	this->m_replaceTo = (argv[3]);
}

const std::string &Replace::getFilename()
{
	return (this->m_filename);
}
const std::string &Replace::replaceTo()
{
	return (this->m_replaceTo);
}
const std::string &Replace::replaceFrom()
{
	return (this->m_replaceFrom);
}


/*
** using char * because i want to move the pointer by 2 so i dont have the ./
** Output will be [a.out: outpu33t.txt: No such file]
*/
int checkFile(char *progName, std::string filename)
{
	std::ifstream fileCheck;

	fileCheck.open(filename);
	if (!fileCheck)
	{
		fileCheck.close();
		std::cout << progName + 2 << ": " << filename << ": No such file" << std::endl;
		return (0);
	}
	fileCheck.close();
	return (1);
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Minimum argument is: 3" << std::endl;
		return (EXIT_FAILURE);
	}
	if (!checkFile(argv[0], argv[1]))
		return (EXIT_FAILURE);

	Replace replace(argv);
	std::cout << "filename: '" << replace.getFilename() << "'" << std::endl;
	std::cout << "replaceTo: '" << replace.replaceTo() << "'" << std::endl;
	std::cout << "replaceFrom: '" << replace.replaceFrom() << "'" << std::endl;
	(void)(argv);
	(void)(argc);
}