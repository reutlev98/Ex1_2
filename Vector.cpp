#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class Vector {
    private:
        std::vector<float> vec;
    public:
    Vector(){ };
    Vector(string str){ 
        this.vec = makeFloatVector(str);
    };

     std::vector<float> makeFloatVector (string str){
        std::stringstream  sstrim(str);

        std::string newStr;
        while(std::getline(sstrim,newStr,' '))
        {
            this.vec.push_back(stof(newStr)); 
        }
        return this.vec;
    }
    
}