#include "GetOutput.h"

GetOutput::GetOutput(){};
void GetOutput::printDist(Vector v1,Vector v2){
    Dist dis;
    std::cout <<"euclidian distance: " << dis.euclideanDistance(v1,v2) << std::endl;
    v1.absValSubtract(v2).print();
    std::cout <<"manhatan distance: " << dis.manhattanDistance(v1,v2) << std::endl;
    std::cout <<"chebishev distance: " << dis.ChebyshevDistance(v1,v2) << std::endl;
    std::cout <<"converra distance: " << dis.CanberraDistance(v1,v2) << std::endl;
    std::cout <<"mikovski distance: " << dis.MinkowskiDistance(v1,v2) << std::endl;
}