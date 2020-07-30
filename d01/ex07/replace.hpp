/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.hpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:54:58 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/30 09:26:01 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#ifndef REPLACE_HPP
# define REPLACE_HPP

#include <string>
#include <iostream>
#include <fstream> // for creating the file

class Replace
{
	public:
		Replace(char **argv);
		const std::string &getFilename();
		const std::string &replaceTo();
		const std::string &replaceFrom();
	private:
		std::string m_filename;
		std::string m_replaceTo;	
		std::string m_replaceFrom;
};

int checkFile(std::string filename); // check if file exist, and returns a true or false
#endif // REPLACE_HPP
