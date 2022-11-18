# include "GetInput.h"

GetInput::GetInput(){};

void GetInput::input(){
    do {
        try{
            check.setValid(true);
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

            check.vectorSize(v1,v2);
            check.zeroDivision(v1,v2);
            check.isEmpty(v1,v2);
        }
        catch(...){
            check.setValid(false);
        }
    }
    while (!check.getValid());
}