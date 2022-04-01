#include "Complex.h"

int main()
{
	setlocale(LC_ALL, "Rus");
	Complex a{3, 4};
	Complex b{4,-8};

	double max = 0;
	Complex m;
	vector <Complex> p;
	string s;

	a.sum(b);
	a.difference(b);
	a.multiplication(b);
	a.division(b);
	
	
	ifstream fin("complex.txt");
	while (getline(fin, s)) 
	{
		p.push_back(str(s));
	}
	
	for (int i = 0; i < p.size(); i++)
	{
		if (absolute(p[i]) > max) 
		{
			max = absolute(p[i]);
			m = p[i];
		}
	}
	cout << endl;
	m.print(m);
	cout << max << endl;
}
