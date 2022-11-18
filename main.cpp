#include "Dist.h"


int main(){
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
    Dist dis;
    std::cout <<"euclidian distance: " << dis.euclideanDistance(v1,v2) << std::endl;
    v1.absValSubtract(v2).print();
    std::cout <<"manhatan distance: " << dis.manhattanDistance(v1,v2) << std::endl;
    std::cout <<"chebishev distance: " << dis.ChebyshevDistance(v1,v2) << std::endl;
    std::cout <<"converra distance: " << dis.CanberraDistance(v1,v2) << std::endl;
    std::cout <<"mikovski distance: " << dis.MinkowskiDistance(v1,v2) << std::endl;
}
