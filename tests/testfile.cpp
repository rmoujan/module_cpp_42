/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   testfile.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rmoujan <rmoujan@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/20 08:56:47 by rmoujan           #+#    #+#             */
/*   Updated: 2022/11/20 09:01:21 by rmoujan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/* File Handling with C++ using ifstream & ofstream class object*/
/* To write the Content in File*/
/* Then to read the content of file*/
#include <iostream>

/* fstream header file for ifstream, ofstream,
fstream classes */
#include <fstream>

using namespace std;

// Driver Code
int main()
{
	// Creation of ofstream class object
	ofstream fout;

	string line;

	// by default ios::out mode, automatically deletes
	// the content of file. To append the content, open in ios:app
	// fout.open("sample.txt", ios::app)
	fout.open("sample.txt");
int i = 0;
	// Execute a loop If file successfully opened
	while (i < 4) {

		// Read a Line from standard input
		getline(cin, line);

		// Press -1 to exit
		if (line == "-1")
			break;

		// Write line in file
		fout << line << endl;
        i++;
	}

	// Close the File
	fout.close();

	// Creation of ifstream class object to read the file
	ifstream fin;

	// by default open mode = ios::in mode
	fin.open("sample.txt");

	// Execute a loop until EOF (End of File)
	while (getline(fin, line)) {
	
		// Print line (read from file) in Console
		cout << line << endl;
	}

	// Close the file
	fin.close();

	return 0;
}
