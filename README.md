# Ex1_2
---
## Description
the purpose of the program in this milestone is to calculate different distance formula between Vectors.
we have created vector class ('Vector') and class ('Dist') who performs distance calculations over them.
the user is ask to insert equal number of values for both vector so we created ('InputValidation') class to enforce it. 
for calculating minkovski distance we chose constant p = 2;

## Optimization
- created dedicated class ('GetOutput') for printing all distances with the desired floating point.
- created dedicated class ('GetInput') for input receiving treatment. 
these first to designs optimized our code by maintainning the main class simple and clean.
-function method of calculating the absolute value of the difference between vectors.
-minkovski calculation function who gets different p values as a input in order to be able to calculate manhattan and euclidean formulas as well.
these last two optimizations preventd code duplication.

## How to use
> "!!!!!!!!!!!!to add intructions to compile on planet/u2"
for running on university server, use the command  *$g++ -std=c++11 *.cpp* for getting a.out file and run this file (*./a.out*)



