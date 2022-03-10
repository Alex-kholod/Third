#include "Complex.h"

void Complex::sum(Complex a)
{
	double x = this->re + a.re;
	double y = this->im + a.im;
	Print(x,y);
}
void Complex::difference(Complex a)
{
	double x = this->re - a.re;
	double y = this->im - a.im;
	Print(x, y);
}

void Complex::multiplication(Complex a)
{
	double x = this->re * a.re - this->im * a.im;
	double y = this->re * a.im + this->im * a.re;
	Print(x, y);
}

void Complex::division(Complex a)
{
	double x = this->re* a.re - this->re * a.im + a.re * this->im + this->im * a.im;
	double y = a.re * a.re - a.re * a.im + a.re * a.im + a.im * a.im;
	cout << x / y << endl;
}

void Print(double x,double y)
{
	if (x == 0) cout << y << "i" << endl;
	else if (y < 0) cout << x << y << "i" << endl;
	else if (y > 0) cout << x << "+" << y << "i" << endl;
	else cout << x << endl;
}

void print(Complex a)
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

//void workwithfile()
//{
//	int k = 0;
//	string  a, g;
//	bool flag = 0;
//
//	ifstream fin("Complex.txt");
//	getline(fin, a);
//	for (int i = 0; i < a.length(); i++)
//	{
//		if (a[i] != ' ')
//		{
//			g = g + a[i];
//		}
//		else
//		{
//			for (int j = 0; j < g.length(); j++)
//			{
//				if ((('0' <= g[j]) && (g[j] <= '9')) || (g[j] == '-') || (g[j] == '.'))
//				{
//					if ((g[j] == '-') && (g[0] == '-')) flag = 0;
//					else flag = 1;
//
//					if ((g[j] == '.') && (g[0] != '.')) flag = 0;
//					else flag = 1;
//
//					if ((('0' <= g[j]) && (g[j] <= '9'))) flag = 0;
//					else flag = 1;
//				}
//				else
//				{
//					flag = 1;
//					break;
//				}
//			}
//			if (flag == 0)
//			{
//				k++;
//				cout << k << endl;
//				//cout << g << endl;
//			}
//			g.clear();
//		}
//
//	}
//	fin.close();
//}
