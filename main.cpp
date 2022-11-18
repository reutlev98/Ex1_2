
#include "Vector.h"

int main(){
    int x = 0;
    std::string str1;
    std::cout << "please enter str1: "<< std::endl;
    std::getline(std::cin,str1);
    std::cout<<str1<<std::endl;

    std::cout<<"please enter str2:"<<std::endl;
    std::string str2;
    std::getline(std::cin,str2);
    std::cout<<str2<<std::endl;

    Vector v1(str1);
    Vector v2(str2);

    v1.print();
    v2.print();

   std::cout << v1.absValDist(v2);
}
