#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class Vector {
   private:
        std::vector<double> vec;
    public:
        Vector();
        Vector(std::string str);
        std::vector<double> getVec();

        std::vector<double> makeFloatVector (std::string str); //this function get string of input and convert it to float veector
        void print(); //this function prints the vector value
        double absValDist(const Vector v2); //|p-q|
};