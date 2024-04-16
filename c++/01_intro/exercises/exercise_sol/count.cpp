// write a code that does the same as "uniq -c" in bash.
#include<iostream>
#include<fstream>
#include <string>

std::string mystring;
int main () {
std::ifstream myfile ("note.txt");
i=0

if ( myfile.is_open() ) { while (myfile.good())
{ // always check whether the file is open
myfile >> mystring; // pipe file's content into stream
if (mystring==mystring)
std::cout << mystring <<"\n"; // pipe stream's content to standard output
}}


}
