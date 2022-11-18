
#include "Vector.h"
#include "math.h"
#include "stdio.h"

    Vector::Vector(){ }; 
    Vector::Vector(std::string str){ 
        this->vec = makeFloatVector(str);
    };

     std::vector<double> Vector::getVec(){
        return this->vec;
     }

    std::vector<double> Vector::makeFloatVector (std::string str){ 
        std::stringstream  sstrim(str);

        std::string newStr;
        while(std::getline(sstrim,newStr,' '))
        {
            this->vec.push_back(stod(newStr)); 
        }
        return this->vec;
    }
    void Vector::print(){
        if (!vec.empty()){
            for(std::vector<double>::iterator i = vec.begin();i!=vec.end();i++){
                std::cout<<"print:"<<*i;
            }
            std::cout<<std::endl;
        }
        else {
            std::cout<<"error:the vector is empty"<<std::endl;
        }
    }

    double Vector::absValDist(Vector v2){ //assuming v1&v2 from the same size 
        double sum = 0;
        std::vector vec_v2 = v2.getVec();
        std::vector<double>::iterator itr_v2 = vec_v2.begin();
        for (std::vector<double>::iterator itr_v1 = vec.begin(); itr_v1 != vec.end(); itr_v1++)
        {
            std::cout << "itr_1 point to: "<< *itr_v1 << " " << "itr_2 points to: "<< *itr_v2 << std:: endl;
            sum += pow((*itr_v1 - *itr_v2),2);
            itr_v2++;
            std::cout<< "current sum (p-q)^2 " <<sum<<std::endl;
        }
        return sqrt(sum);
    }

    double Vector::norm(){
        int sum = 0; 
         for(std::vector<double>::iterator i = vec.begin(); i!=vec.end(); i++){
         sum += pow(*i,2);
         }
         return sqrt(sum);
    }
   