
#include "Vector.h"
#include "math.h"
#include "stdio.h"

    Vector::Vector(){}; 
    Vector::Vector(std::string str){ 
        this->vec = makeFloatVector(str);
    };

     std::vector<double> Vector::getVec(){
        return this->vec;
     }

    void Vector::setVec(std::vector<double> v){
        this->vec = v;
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

    double Vector::absValDist(Vector v2, double p){ //assuming v1&v2 from the same size 
        double sum = 0;
        std::vector vec_v2 = v2.getVec();
        std::vector<double>::iterator itr_v2 = vec_v2.begin();
        for (std::vector<double>::iterator itr_v1 = vec.begin(); itr_v1 != vec.end(); itr_v1++)
        {
            sum += pow(abs(*itr_v1 - *itr_v2),p);
            itr_v2++;
        }
        double ans = pow(sum,(1/p));
        return ans;
    }

    double Vector::norm(){
        int sum = 0; 
         for(std::vector<double>::iterator i = vec.begin(); i!=vec.end(); i++){
         sum += pow(*i,2);
         }
         return sqrt(sum);
    }


     Vector Vector::absValSubtract(Vector v2){
        Vector subtract;
        std::vector vec_v2 = v2.getVec();
        std::vector vec_subtract = subtract.getVec();
        std::vector<double>::iterator itr_v2 = vec_v2.begin();
        std::vector<double>::iterator itr_substract = vec_subtract.begin();
         for (std::vector<double>::iterator itr_v1 = vec.begin(); itr_v1 != vec.end(); itr_v1++){
             vec_subtract.push_back(abs(*itr_v1 - *itr_v2));
             *itr_v2++;
             *itr_substract++;
         }
         subtract.setVec(vec_subtract);
         return subtract;
     }
   