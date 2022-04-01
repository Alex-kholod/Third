#ifndef COMPLEX_H
#define COMPLEX_H

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

struct Complex
{
	double re = 0;
	double im = 0;
	Complex sum(Complex a);
	Complex difference(Complex a);
	Complex multiplication(Complex a);
	Complex division(Complex a);
	Complex print(Complex a);
};
void Print(double x,double y);
double absolute(Complex a);
Complex str(string a);

#endif

