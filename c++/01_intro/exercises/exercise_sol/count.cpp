// write a code that does the same as "uniq -c" in bash.
#include<iostream>
#include<fstream>
#include <string>

std::string mystring;
int main () {
std::ifstream myfile ("note.txt");;

if ( myfile.is_open() ) { // always check whether the file is open
myfile >> mystring; // pipe file's content into stream
std::cout << mystring; // pipe stream's content to standard output
}


}
