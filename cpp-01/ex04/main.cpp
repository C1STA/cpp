/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: wcista <wcista@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/11 22:18:29 by wcista            #+#    #+#             */
/*   Updated: 2023/09/12 16:17:44 by wcista           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <fstream>
#include <string>
#include <cstring>

std::string	replaceAll(std::string input, const std::string& s1, const std::string& s2)
{
	std::string	dest;
	size_t		pos = 0;
	while (pos < input.length())
	{
		size_t	found = input.find(s1, pos);
		if (found != std::string::npos)
		{
			dest += input.substr(pos, found - pos);
			dest += s2;
			pos = found + s1.length();
		}
		else
		{
			dest += input.substr(pos);
			break ;
		}
	}
	return (dest);
}

int	main(int ac, char *av[])
{
	if (ac != 4)
		return (std::cerr << "Usage: " << av[0] << " <filename> <s1> <s2>" << std::endl, 1);

	std::string	filename = av[1];
	std::string	s1 = av[2];
	if (!s1.size())
		return (std::cerr << "Error: <s1> empty" << std::endl, 2);
	std::string s2 = av[3];

	const char*	filename_cstr = filename.c_str();
	std::ifstream	inputFile(filename_cstr);
	if(!inputFile)
		return (std::cerr << "Error: Unable to open file " << filename << std::endl, 3);

	std::string	outputFilename = filename + ".replace";
	const char*	outputFilename_cstr = outputFilename.c_str();
	std::ofstream	outputFile(outputFilename_cstr);
	if (!outputFile)
		return (std::cerr << "Error: Unable to create output file " << outputFilename << std::endl, 4);
	
	std::string	line;
	while (std::getline(inputFile, line))
	{
		line = replaceAll(line, s1, s2);
		outputFile << line << std::endl;
	}

	inputFile.close();
	outputFile.close();

	return (0);
}
