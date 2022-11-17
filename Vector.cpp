
#include "Vector.h"

class Vector {
    private:
        std::vector<float> vec;
    public:
    Vector::Vector(){ };
    Vector::Vector(std::string str){ 
        this->vec = makeFloatVector(str);
    };

     std::vector<float> Vector::makeFloatVector (std::string str){
        std::stringstream  sstrim(str);

        std::string newStr;
        while(std::getline(sstrim,newStr,' '))
        {
            this->vec.push_back(stof(newStr)); 
        }
        return this->vec;
    }
    
};