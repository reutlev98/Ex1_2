#include "Dist.h"

class InputValidation{
private:
bool valid = true;
public:
    InputValidation();
    void vectorSize(Vector v1, Vector v2);
    void zeroDivision(Vector v1, Vector v2);
    void isEmpty(Vector v1, Vector v2);
    void isNumber(std::string str);
    void setValid(bool flag);
    bool getValid();
};