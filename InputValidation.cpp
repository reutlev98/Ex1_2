#include "InputValidation.h"
#include "stdio.h"

InputValidation::InputValidation(){};

void InputValidation::setValid(bool flag){
    valid = flag;
}

bool InputValidation::getValid(){
    return valid;
}

void InputValidation::vectorSize(Vector v1, Vector v2){
    std::vector<double> vec_v1 = v1.getVec();
    std::vector<double> vec_v2 = v2.getVec();
    if(vec_v1.size()!=vec_v2.size()){
         setValid(false);
    }
}

 void InputValidation::zeroDivision(Vector v1, Vector v2){
    std::vector<double> vec_v1 = v1.getVec();
    std::vector<double> vec_v2 = v2.getVec();
        std::vector<double>::iterator itr_v2 = vec_v2.begin();
        for (std::vector<double>::iterator itr_v1 = vec_v1.begin(); itr_v1 != vec_v1.end(); itr_v1++)
        {
            if(*itr_v1==0 && *itr_v2==0){
                setValid(false);
            }
            *itr_v2++;
        }
 }

 void InputValidation::isEmpty(Vector v1, Vector v2){
    std::vector<double> vec_v1 = v1.getVec();
    std::vector<double> vec_v2 = v2.getVec();
    if (vec_v1.empty() || vec_v2.empty()){
        setValid(false);
    }
 }

 void InputValidation::isNumber(std::string str){
 }
