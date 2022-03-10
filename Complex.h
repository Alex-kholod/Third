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
	void sum(Complex a);
	void difference(Complex a);
	void multiplication(Complex a);
	void division(Complex a);
};
void print(Complex a);
void Print(double x,double y);
double absolute(Complex a);
Complex str(string a);

#endif

