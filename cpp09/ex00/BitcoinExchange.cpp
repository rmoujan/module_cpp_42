/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:17 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/22 23:16:08 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

void ft_errnoo(int code) {

	if (code == 1) {
		std::cout << "ERROR: COULD NOT OPEN FILE" << std::endl;
	} else if (code == 2) {
		std::cout << "ERROR: WRONG FORMAT OF DATA" << std::endl;
	} else if (code == 3) {
		std::cout << "ERROR: FILE IS EMPTY" << std::endl;
	} else if (code == 4) {
		std::cout << "ERROR: PLEASE ENTER A FILE" << std::endl;
	}
	exit(0);
}

void creating_database(std::map<std::string, std::string> &base) {

	std::ifstream infile;
	std::string	  data, key, value;

	infile.open("data.csv");
	if (infile == 0)
		ft_errnoo(1);
	infile >> data;
	if (data.empty())
		ft_errnoo(3);
	while ((infile >> data)) {
		std::stringstream str(data);
		std::getline(str, key, ',');
		std::getline(str, value, ',');
		base.insert(std::pair<std::string, std::string>(key, value));
	}
}

int check_input_file(char *filee)
{

	std::ifstream infile;
	std::string	  data;

	infile.open(filee);
	if (infile == 0)
	{
		ft_errnoo(1);
		return (0);
	}
	infile >> data;
	if (data.empty())
	{
		ft_errnoo(3);
		return (0);
	}
	return (1);
}

//check is a only of | exist . and 2 of - exist otherwise return 0
int check_format_line(std::string data)
{
	int index = data.find('|');
	if (std::count(data.begin(), data.end(), '|') != 1)
	{
		std::cout <<"ERROR : invalid Format => "<<data<<std::endl;
		return (0);
	}
	if (std::count(data.begin(), data.end(), '-') != 2)
	{
		std::cout <<"ERROR : invalid Format => "<<data<<std::endl;
		return (0);
	}
	if (std::count(data.begin(), data.end(), ' ') != 2)
	{
		std::cout <<"ERROR : invalid Format => "<<data<<std::endl;
		return (0);
	}
	if (index > 0)
	{
		if (data[index - 1] != ' ' || data[index + 1] != ' ')
		{
			std::cout <<"ERROR : invalid Format => "<<data<<std::endl;
			return (0);
		}
	}
	return (1);	
}

int check_year(std::string year)
{
    int number = 0;

	if (year.length() != 4)
	{
		std::cout <<"ERROR : invalid year, year required 4 digits => "<<year<<std::endl;
		return (0);
	}
    std::stringstream object;
    object << year;
    object >> number;

	if (number < 2009 || number > 2022)
	{
		std::cout <<"ERROR : invalid year, year must be included between 2000 and 2022 => "<<year<<std::endl;
		return (0);
	}
    return (1);
}

int check_month(std::string month)
{
    int number = 0;

	if (month.length() != 2)
	{
		std::cout <<"ERROR : invalid month, month required 2 digits => "<<month<<std::endl;
		return (0);
	}
    std::stringstream object;
    object << month;
    object >> number;
	if (number < 1 || number > 12)
	{
		std::cout <<"ERROR : invalid month, month must be included between 1 and 12 => "<<month<<std::endl;
		return (0);
	}
    return (1);
}

int check_day(std::string day, std::string month)
{
    int d = 0;
	int m = 0;
	
	if (day.length() != 2)
	{
		std::cout <<"ERROR : invalid day, day required 2 digits => "<<day<<std::endl;
			// for (int i = 0; i < day.length(); i++)
			// {
			// 	if (day[i] == ' ')
			// 	{
			// 		std::cout<<"SPACE\n";

			// 	}
			// 	else if (day[i] == '\0')
			// 	{
			// 		std::cout<<"back zer\n";

			// 	}
			// 	std::cout <<"|"<<day[i]<<"|"<<std::endl;
			// }
		return (0);
	}

    std::stringstream object_d;
    object_d << day;
    object_d >> d;

	std::stringstream object_m;
    object_m << month;
    object_m >> m;

	if (m == 2)
	{
		if (d < 1 || d > 28)
		{
			std::cout <<"ERROR : invalid day, day must be included between 1 and 28 => "<<day<<std::endl;
			return (0);
		}
	}
	else
		if (d < 1 || d > 31)
		{
			std::cout <<"ERROR : invalid day, day must be included between 1 and 31 => "<<day<<std::endl;
			return (0);
		}
    return (1);
}


int check_first(std::string word, std::string key)
{
	std::string result;
	std::string month;
	int count = 0;

	if (word[word.length() - 1] != ' ')
	{
		std::cout <<"ERROR : invalid Date => "<<word<<std::endl;
		return (0);
	}
	else if(!isdigit(word[word.length() - 2]))
	{
		std::cout <<"ERROR : invalid Date => "<<word<<std::endl;
		return (0);
	}
	std::string r = word.substr(0, (word.length() - 1));
		// for (int i = 0; i < r.length(); i++)
		// {
		// 	if (r[i] == ' ')
		// 	{
		// 		std::cout<<"SPACE\n";
		// 	}
		// 	else if (r[i] == '\0')
		// 	{
		// 		std::cout<<"back zer\n";
		// 	}
		// 	std::cout <<"|"<<r[i]<<"|"<<std::endl;
		// }
	std::stringstream str(r);
	while (getline(str, result, '-'))
	{
		if (count == 0)
			check_year(result);
		else if (count == 1)
		{
			month = result;
			check_month(result);
		}
		else if(count == 2)
		{
			check_day(result, month);
		}
		count++;
	}
	if (count != 2)
	{
		std::cout <<"ERROR : invalid Date => "<<word<<std::endl;
		return (0);
	}
	return (1);
}

int check_second(std::string data, float& value)
{
	if (data[0] != ' ')
		return (0);
	if (std::count(data.begin(), data.end(), ',') > 1)
		return (0);
	else if(!isdigit(data[data.length() - 1]))
		return (0);
	std::replace(data.begin(), data.end(), ',', '.');
	std::stringstream object;
    object << data;
    object >> value;
	if (value < 0 || value > 1000)
		return (0);
	return (1);
}

int  check_date(std::string data, std::string& key, float& value)
{
	std::string word;
	if (!isdigit(data[0]))
	{
		std::cout <<"ERROR : invalid Format => "<<data<<std::endl;
		return (0);
	}
	if (!isdigit(data[data.length() - 1]))
	{
		std::cout <<"ERROR : invalid Format => "<<data<<std::endl;
		return (0);
	}
	std::stringstream str(data);
	getline(str, word, '|');
	check_first(word, key);
	std::stringstream ss(word);
    ss >> key; 
	getline(str, word, '|');
	check_second(word, value);
	return (1);	
}

void output_data(std::string filee, std::map<std::string, std::string> base) 
{
	std::ifstream infile;
	std::string	  data, key;
	std::map<std::string, std::string>::iterator it;	
	float value;

	infile.open(filee);

	while (getline(infile, data)) 
	{
		// std::cout <<data<<std::endl;
		if (check_format_line(data) == 0)
		{
			continue;
		}
		if (check_date(data, key, value) == 0)
		{
			continue;
		}
	}
}

