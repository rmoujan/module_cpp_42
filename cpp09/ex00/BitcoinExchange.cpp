/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.1337.ma>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/16 08:18:17 by rmoujan           #+#    #+#             */
/*   Updated: 2023/03/20 02:48:44 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




#include "BitcoinExchange.hpp"

void ft_errno(int code) {

	if (code == 1) {
		std::cout << "ERROR: WRONG FORMAT OF DATA" << std::endl;
	}
}

BitcoinExchange :: BitcoinExchange() {
	std::cout << "Default constructor of BitcoinExchange has been invoked " << std::endl;
}

BitcoinExchange :: BitcoinExchange(const BitcoinExchange &obj) {
	std::cout << "Copy constructor of BitcoinExchange has been invoked " << std::endl;
	*this = obj;
}

BitcoinExchange &BitcoinExchange :: operator=(const BitcoinExchange &obj) {

	std::cout << "Copy assignment operator of BitcoinExchange has been invoked " << std::endl;
	this->base = obj.base;
	return (*this);
}

BitcoinExchange :: ~BitcoinExchange() {
	std::cout << "Destructor of BitcoinExchange has been invoked " << std::endl;
}

std :: map<std::string, std::string> BitcoinExchange ::getBase() const {
	return (this->base);
}
//check is a 1 | exist and 2 of - exist otherwise return 0
int check_format_line(std::string data)
{
	// if (data.find("|") == string::npos)
	// 	return (0);
	if (std::count(data.begin(), data.end(), '|') != 1)
		return (0);
	else if (std::count(data.begin(), data.end(), '-') != 2)
		return (0);
	//calcul if there are more than 2 spaces , return 0, cuz must be only 2 spaces
	else if (std::count(data.begin(), data.end(), ' ') != 2)
		return (0);
	return (1);	
}

int check_year(std::string year)
{
    int number = 0;

	if (year.length() != 4)
		return (0);
    std::stringstream object;
    object << year;
    object >> number;

	if (number < 2009 || number > 2022)
		return (0);
    return (1);
}

int check_month(std::string month)
{
    int number = 0;

	if (month.length() != 2)
		return (0);
    std::stringstream object;
    object << month;
    object >> number;
	if (number < 1 || number > 12)
		return (0);
    return (1);
}

int check_day(std::string day, std::string month)
{
    int d = 0;
	int m = 0;
	if (day.length() != 2)
		return (0);

    std::stringstream object_d;
    object_d << day;
    object_d >> d;

	std::stringstream object_m;
    object_m << month;
    object_m >> m;

	if (m == 2)
	{
		if (d < 1 || d > 28)
			return (0);
	}
	else
		if (d < 1 || d > 31)
			return (0);
    return (1);
}


int check_first(std::string word, std::string key)
{
	std::string result;
	std::string month;
	int count = 0;
	//check is that last char is a space
	if (word[word.length() - 1] != ' ')
		return (0);
	//check is that bfr the last  char is a not a number
	else if(!isdigit(word[word.length() - 2]))
		return (0);
	//split the date by - and count the -, must be 2 :
	std::stringstream str(word);
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
			check_day(result, month);
		
		count++;
	}
	if (count != 2)
		return (0);
	return (1);
}

int check_second(std::string data, float& value)
{
	//check is the first char is space, if not return error
	if (data[0] != ' ')
		return (0);
	//Must be one comma or nothing :
	if (std::count(data.begin(), data.end(), ',') > 1)
		return (0);
	//check is the last char is not a digit, return error
	else if(!isdigit(data[data.length() - 1]))
		return (0);
	//replace comma with point :
	std::replace(data.begin(), data.end(), ',', '.');
	std::stringstream object;
    object << data;
    object >> value;
	if (value < 0 || value > 1000)
		return (0);
	return (1);
}

// weslt f parsing deyal date !!!
int  check_date(std::string data, std::string& key, float& value)
{
	std::string word;
	// check if the first char in the line is an integer
	if (!isdigit(data[0]))
		return (0);
	std::stringstream str(data);
	getline(str, word, '|');
	check_first(word, key);
	//hadshi yedar in casee makaynsh error
	std::stringstream ss(word);
    ss >> key; // Extract word from the stream.
	getline(str, word, '|');

	check_second(word, value);
	return (1);	
}

void BitcoinExchange :: output_data(std::string filee, std::map<std::string, std::string> base) {

	// fill the file into the base , cheak each line is correct, do the calcul then output
	std::ifstream infile;
	std::string	  data, key;
	float value;
	// float number;
	infile.open(filee);
	//data contain the whole line 
	while (getline(infile, data)) {
		std::cout <<data<<std::endl;
		// std::cout<<std::endl;
		if (check_format_line(data) == 0)
		{
			// ft_errno(1);
			continue;
		}
		if (check_date(data, key, value) == 0)
		{
			// ft_errno(1);
			continue;
		}
		//starting calcul :
		std::cout <<key<<" => "<<value<<" = "<<
		std::cout <<"key is |"<<key<<"|"<<" and value is |"<<value<<"|"<<std::endl;
		// base.insert(std::pair<std::string, float>(key, value));
		//hena fash khaski diri process !!!!
	}
}

