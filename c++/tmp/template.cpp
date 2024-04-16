// this is a code for template
#include<iostream>
template<typename T>
T getmax(T x, T y){
return x>y? x:y;}

int main() {
std::cout << getmax<int>(7,9)<<'\n';
std::cout << getmax<double>(7.9,9.9)<<'\n';
  return 0;
}
