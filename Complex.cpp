#include "Complex.h"

Complex Complex::sum(Complex a)
{
	double x = this->re + a.re;
	double y = this->im + a.im;
	Complex d{ x, y };
	return d;
	//Print(x,y);
}
Complex Complex::difference(Complex a)
{
	double x = this->re - a.re;
	double y = this->im - a.im;
	Complex d{ x, y };
	return d;
	//Print(x, y);
}

Complex Complex::multiplication(Complex a)
{
	double x = this->re * a.re - this->im * a.im;
	double y = this->re * a.im + this->im * a.re;
	Complex d{ x, y };
	return d;
	//Print(x, y);
}

Complex Complex::division(Complex a)
{
	double x = this->re* a.re - this->re * a.im + a.re * this->im + this->im * a.im;
	double y = a.re * a.re - a.re * a.im + a.re * a.im + a.im * a.im;
	/*Complex d{ x, y };
	return d;*/
	//cout << x / y << endl;
}

void Print(double x,double y)
{
	if (x == 0) cout << y << "i" << endl;
	else if (y < 0) cout << x << y << "i" << endl;
	else if (y > 0) cout << x << "+" << y << "i" << endl;
	else cout << x << endl;
}

Complex Complex::print(Complex a)
{
	if (a.im >= 0) cout << a.re << "+" << a.im << "i" << endl;
	else cout << a.re << a.im << "i" << endl;
}

double absolute(Complex a) 
{
	return sqrt(a.re * a.re + a.im * a.im);
}
Complex str(string a) 
{
	Complex c;
	string b;
	for (int i = 0; i < a.size(); i++) 
	{
		if ((a[i] == '+' or a[i] == '-') and b.size() != 0) 
		{
			c.re = stod(b);
			b.clear();
			if (a[i] == '-') 
			{
				b += '-';
			}
		}
		else if (isdigit(a[i]) or a[i] == '.' or a[i] == '-') 
		{
			b += a[i];
		}
		if (a[i] == 'i')
		{
			c.im = stod(b);
		}
	}
	return c;
}
