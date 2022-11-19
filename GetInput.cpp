# include "GetInput.h"

GetInput::GetInput(){};

Vector GetInput::getV1(){
    return v1;
}

Vector GetInput::getV2(){
    return v2;
}

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

            check.isNumber(str1);
            check.isNumber(str2);
            if (check.getValid()){ 
               Vector vec1(str1);
               v1= vec1;
               Vector vec2(str2);
               v2= vec2;

                v1.print();
                v2.print();

            check.vectorSize(v1,v2);
            check.zeroDivision(v1,v2);
            check.isEmpty(v1,v2);
            }  
        }
        catch(...){
            check.setValid(false);
        }
    }
    while (!check.getValid());
  
}