/* ************************************************************************** */
/*                                                                            */
/*                                                        ::::::::            */
/*   replace.cpp                                        :+:    :+:            */
/*                                                     +:+                    */
/*   By: bdekonin <bdekonin@student.codam.nl>         +#+                     */
/*                                                   +#+                      */
/*   Created: 2020/07/29 17:56:50 by bdekonin      #+#    #+#                 */
/*   Updated: 2020/07/30 20:02:34 by bdekonin      ########   odam.nl         */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream> // for creating the file

/*
** using char * because i want to move the pointer by 2 so i dont have the ./
** Output will be [a.out: outpu33t.txt: No such file]
*/
static int checkFile(char *progName, const std::string &filename, std::ifstream *fileIn)
{
	fileIn->open(filename);
	if (!fileIn)
	{
		fileIn->close();
		std::cout << progName + 2 << ": " << filename << ": No such file" << std::endl;
		return (0);
	}
	return (1);
}

static void readLine(std::ifstream &fileIn, std::string *buf)
{
	char c;
	while (fileIn.get(c))
	{
		buf->push_back(c);
	} 
}

static void find_and_replace(std::string &buf, const std::string &replaceFrom, const std::string &replaceTo)
{
	int pos;
	pos = buf.find(replaceFrom);
	while (pos >= 0)
	{
		buf.replace(pos, replaceFrom.length(), replaceTo);
		pos = buf.find(replaceFrom);
	}
}

int main(int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Minimum argument is: 3" << std::endl;
		return (EXIT_FAILURE);
	}
	
	std::string		filename;
	std::ifstream 	fileIn;
	filename = argv[1];
	std::ofstream 	fileOut(filename + ".replace");
	if (!checkFile(argv[0], filename, &fileIn))
		return (EXIT_FAILURE);

	std::string		buf;
	readLine(fileIn, &buf);
	if (strcmp(argv[2], argv[3]))
	{
		find_and_replace(buf, (argv[2]), (argv[3]));
		fileOut << buf;
	}
	else
		fileOut << buf;

	return (EXIT_SUCCESS);
}