// #include <fstream>
// #include <iostream>
// #include <sstream>
// #include <string>
// #include <vector>

// using namespace std;

// int main() {
// 	// string fname;
// 	// cout << "Enter the file name: ";
// 	// cin >> fname;
// 	// string line, word;

// 	// fstream file(fname, ios::in);
// 	// if (file.is_open()) {
// 	// 	while (getline(file, line)) {

// 	// 		stringstream str(line);
// 	// 		// cout << "Line is |" << line <<"|"<<endl;
// 	// 			// std::cout <<getline(str, word, '|');
// 	// 		getline(str, word, '|');
// 	// 		cout << "  word is |" << word <<"|"<<endl;
// 	// 		getline(str, word, '|');
// 	// 		cout << "  word is |" << word <<"|"<<endl;
// 	// 			// cout << "  str is " << line << std::endl;
			
// 	// 		cout << endl;
// 	// 	}
// 	// }
// 	std::string word = "2011-01-03-78";
// 	std::stringstream str(word);
// 	std::string result;
// 	int count = 0;
// 	while (getline(str, result, '-'))
// 	{
// 		count++;
// 	}
	
// 	cout<<"str is "<<count;
// //   std::string food = "hallo world 2023";
// //   std::cout << food.find("o")<<endl;
// // //   if (food.find("|") == 18446744073709551615)
// // if (food.find("h") == string::npos)
// // 		cout <<" NOT FOUND "<<endl;
// 	// std::string s = "Year-Month-Day-";
//   	// size_t n = std::count(s.begin(), s.end(), '-');
// 	// cout<<n;

// 	// cout << isdigit('q');
// 		// cout <<"ok";



// 	return 0;
// }


#include <iostream>
#include <string>
#include <vector>
#include <string>
#include <iostream>
#include <sstream>
using namespace std;
int main() {


	std::string year = "09";
	// std::cout <<year.length();

    int number = 0;

	// if (year.lenght() != 4)
	// 	return (0);
    stringstream object;
    object << year;
    object >> number;
	cout <<"number is "<<number<<endl;
	if (number < 1 || number > 12)
		cout <<number;

}