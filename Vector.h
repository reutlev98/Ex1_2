#include <vector>
#include <string>
#include <sstream>
#include <iostream>

class Vector {
    private:
        std::vector<float> vec;
    public:
    Vector();
    Vector(std::string str);

     std::vector<float> makeFloatVector (std::string str);
     void print();

};