/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fbenini- <your@mail.com>                   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/21 19:45:02 by fbenini-          #+#    #+#             */
/*   Updated: 2026/03/21 20:21:04 by fbenini-         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>
#include <fstream>

static void	search_and_replace(std::string to_search, std::string to_replace, std::ifstream &input_file, std::ofstream &output_file)
{
	std::string 			in_line;
	std::string				out_line;
	std::string::size_type	found;
	size_t					end_last_found;

	end_last_found = 0;
	while(std::getline(input_file, in_line))
	{
		out_line.clear();
		end_last_found = 0;
		found = in_line.find(to_search);
		if (found != std::string::npos)
		{
			while (found != std::string::npos)
			{
				out_line.append(in_line, end_last_found, found - end_last_found);
				out_line += to_replace;
				end_last_found = found + to_search.length();
				found = in_line.find(to_search, end_last_found);
				if (found == std::string::npos)
					out_line.append(in_line, end_last_found, in_line.length());
			}
		}
		else
			out_line = in_line;
		output_file << out_line;
		if (!input_file.eof())
			output_file << std::endl;
	}
}

int main(int argc, char **argv)
{
	std::string		in;
	std::string		out;
	std::ifstream	in_file;
	std::ofstream	out_file;

	in = argv[1];
	out = in + ".replace";
	if (argc != 4)
	{
		std::cerr << "./replace file_name <search> <replace>" << std::endl;
		return (0);
	}
	in_file.open(in.c_str(), std::fstream::in);
	out_file.open(out.c_str(), std::fstream::out);
	if (!in_file || !out_file)
	{
		std::cerr << "Could not open/create the files." << std::endl;
		in_file.close();
		out_file.close();
		return (1);
	}
	search_and_replace(argv[2], argv[3], in_file, out_file);
	in_file.close();
	out_file.close();
	return (0);
}
