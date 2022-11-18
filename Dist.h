

#include "Vector.h"


class Dist{

    public:
        Dist(); //constructor
        double euclideanDistance(Vector v1, Vector v2);
        double manhattanDistance(Vector v1, Vector v2);  //sum(|pi-qi|)
        double ChebyshevDistance(Vector v1, Vector v2);  //max(|pi-qi|)
        double CanberraDistance(Vector v1, Vector v2);   //sum((|pi-qi|)\(|p|+|q|))
        double MinkowskiDistance(Vector v1, Vector v2);  // (sum [|xi-yi|^p])^ 1/p
        static const int p = 2;
};
