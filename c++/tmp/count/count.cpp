// write a code that does the same as "uniq -c" in bash
#include<iostream>
#include<fstream>
#include<string.h>

std::string mystring;
int main() {
	std::ifstream myfile("note.txt");
	if (myfile.is_open()) { // always check whether the file is open
		//std::cout << "File is open" << "\n";
		std::string previousline;
		int counter = 1;
		while (myfile.good()) {
			myfile >> mystring; // pipe file's content into stream
			if (previousline.empty()) {
				previousline = mystring;
			} else if (previousline.compare(mystring) == 0) {
				counter++;
			} else {
				std::cout << counter << "\t" << previousline << "\n"; // pipe stream's content to standard output
				previousline = mystring;
				counter = 1;
			}
		}
		std::cout << counter << "\t" << previousline << "\n"; // pipe stream's content to standard output
	} else {
		std::cout << "File is not open" << "\n";
	}
}
