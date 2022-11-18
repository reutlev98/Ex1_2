
#include "Dist.h"

 Dist::Dist(){}; //construtcor


double Dist::euclideanDistance(Vector v1, Vector v2){  // euclidian distance calc using |p-1| method in Vector class
return v1.Vector::absValDist(v2,2);
};

double Dist::manhattanDistance(Vector v1, Vector v2){
   return v1.absValDist(v2,1);
}

double Dist::ChebyshevDistance(Vector v1, Vector v2){
    double max = 0;
    Vector substract = v1.absValSubtract(v2);
    std::vector<double> subVec = substract.getVec();
    for(std::vector<double>::iterator i = subVec.begin(); i!=subVec.end(); i++){
          if(*i > max){
            max = *i;
            } 
        }
        return max;
}

double Dist::CanberraDistance(Vector v1, Vector v2){
    double sum = 0;
    std::vector<double> v1Vec = v1.getVec();
    std::vector<double>::iterator itr_v1 = v1Vec.begin();
    std::vector<double> v2Vec = v2.getVec();
    std::vector<double>::iterator itr_v2 = v2Vec.begin();
    Vector sub = v1.absValSubtract(v2);
    std::vector subVec = sub.getVec();
    for(std::vector<double>::iterator i = subVec.begin(); i!=subVec.end(); i++){
       sum += (*i) / (abs(*itr_v1) + abs(*itr_v2));
    }
    return sum;
}


double Dist::MinkowskiDistance(Vector v1, Vector v2){
return v1.absValDist(v2,p);
}