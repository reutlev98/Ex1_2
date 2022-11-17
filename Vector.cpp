
#include "Vector.h"

    Vector::Vector(){ }; 
    Vector::Vector(std::string str){ 
        this->vec = makeFloatVector(str);
    };

    std::vector<float> Vector::makeFloatVector (std::string str){ //this function get string of input and convert it to float veector
        std::stringstream  sstrim(str);

        std::string newStr;
        while(std::getline(sstrim,newStr,' '))
        {
            this->vec.push_back(stof(newStr)); 
        }
        return this->vec;
    }
    void Vector::print(){
        if (!vec.empty()){
            for(std::vector<float>::iterator i = vec.begin();i!=vec.end();i++){
                std::cout<<*i;
            }
            std::cout<<std::endl;
        }
        else {
            std::cout<<"error:the vector is empty"<<std::endl;
        }
    }