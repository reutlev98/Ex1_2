#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class Vector{
   private:
        std::vector<double> vec;
    public:
        Vector();
        Vector(std::string str);
        std::vector<double> getVec();
        void setVec(std::vector<double> v);//setter
        std::vector<double> makeFloatVector (std::string str); //this function get string of input and convert it to float veector
        void print(); //this function prints the vector value
        double absValDist(Vector v2, double p); //|p-q|
        double norm();//sqrt(x1^2 + x2^2 + x3^2...)
        Vector absValSubtract(Vector v1); ///this function returns one  abs subtraction (-) Vector --> v = |v1 - v2|;
};