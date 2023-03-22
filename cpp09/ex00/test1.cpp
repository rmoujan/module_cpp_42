#include <iostream>
#include <map>
#include <string>
// C++ function for illustration
// map::lower_bound() function

using namespace std;

int main()
{
	std::string a = "2020-01-01";
	std::string b = "2020-01-01";
	if (a.compare(b) == 0)
		std::cout <<"OK"<<std::endl;
	else if (a.compare(b) < 0)
		std::cout <<"a less"<<std::endl;
	else
		std::cout <<"b less "<<std::endl;
	return 0;
}
