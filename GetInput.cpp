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
            check.setValid(true); //re-define the flag as true-valid
            std::string str1;
            std::getline(std::cin,str1); //get str1 as a sentence (with " ")
            std::string str2;
            std::getline(std::cin,str2);//get str2 as a sentence (with " ")
            check.isNumber(str1); //check input is digit
            check.isNumber(str2);

            if (check.getValid()){ //if input is digit insert to vector and continue validation
               Vector vec1(str1);
               v1= vec1; //intialize v1 memeber
               Vector vec2(str2);
               v2= vec2; //intialize v2 member
               check.vectorSize(v1,v2); //check vector from equal size
               check.zeroDivision(v1,v2); //check no 0 in same position
               check.isEmpty(v1,v2); //check vectors aren't empty
            }  
        }
        catch(...){ //if input inserted in a bad way, evoking input-error -> catch and inform check
            check.setValid(false);
        }
    }
    while (!check.getValid()); //if the user inserted invalid input - ask him to insert again
  
}