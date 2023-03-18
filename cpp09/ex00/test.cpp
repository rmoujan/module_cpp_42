#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
#include <vector>

using namespace std;

int main() {
	string fname;
	cout << "Enter the file name: ";
	cin >> fname;
	string line, word;

	fstream file(fname, ios::in);
	if (file.is_open()) {
		while (getline(file, line)) {

			stringstream str(line);
			cout << "Line is " << line << endl;
			while (getline(str, word, ',')) {
				cout << "  word is " << word;
				// cout << "  str is " << line << std::endl;
			}
			cout << endl;
		}
	}

	return 0;
}