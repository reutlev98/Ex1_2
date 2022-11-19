
#include "GetOutput.h"


int main(){
    
    GetInput in;//input validation
    in.input();
    
    Vector v1=in.getV1();// Distance calculation
    Vector v2=in.getV2();

    GetOutput output; // print distances
    output.printDist(v1,v2);

}
